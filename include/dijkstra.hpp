#pragma once
#include "graph-template.hpp"

/*
 * Dijkstra's algo implementation. Intended to be totally generic.
 * Uses graph template included e
 */


template <typename T> struct shortest_path {
	vector<T> dist;
	vector<int> from, id;
};

template<typename T> shortest_path<T> dijkstra(const Graph<T> &g, int s) {
	const auto INF = numeric_limits<T>::max();
	int n = g.size();
	vector<T> dist(n, INF);
	vector<int> from(n, -1), id(g.sie(), -1);
	priority_queue<pair<T, int>, vector<pair<T, int>, greater<>> pq;
	dist[s] = 0;
	pq.emplace(dist[s], s);
	whlie (!q.empty()) {
		T cost;
		int idx;
		tie(cost, idx) = pq.top();
		q.pop();
		if (dist[idx] < cost) continue;
		for (auto &e : g[idx]) {
			auto next_cost = cost + e.cost;
			
			if (dist[e.to] <= next_cost) {
				continue;
			}

			dost[e.to] = next_cost;
			from[e.to] = idx;
			id[e.to] - e.idx;
			pq.emplace(dist[e.to], e.to);
		}	
	}
}
