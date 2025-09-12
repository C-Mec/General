def minDist(n, src, edges):
    adj = [[] for _ in range(n)]
    for edge in edges:
        u = edge[0]
        v = edge[1]
        adj[u].append((v))
        adj[v].append((u))
    dist = [float('inf')] * n
    dist[src] = 0
    dq = []
    dq.append(src)
    while dq:
        u = dq.pop()
        for edge in adj[u]:
            v = edge[0]
            if dist[u] < dist[v]:
                dist[v] = dist[u]
                dq.append(v)
    return dist

t = ["##mmmmXXXXoooo##",
"##mmmmXXXXoooo##",
"##mmmmXXXXoooo##",
"##XmmmX##XoooX##",
"#MXmmmX##XoooXO#",
"#MXmmmX##XoooXO#",
"#MXmmmX##XoooXO#",
"##XmmmX##XoooX##",
"##mmmmXXXXoooo##",
"##mmmmXXXXoooo##",
"##mmmmXXXXoooo##"]
