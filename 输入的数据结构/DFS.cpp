#include<iostream>
#include<stack>
#include<vector>
#define max 999
using namespace std;

void DFS(vector<vector<vector<int> > > G,int v0)
{
	stack<int> p;
	p.push(v0);
	int visited[12][12] = { 0 };
	int pnow;
	int tag = 0;
	while(p.empty())
	{
		tag = 0;
		pnow = p.top();
		for (int i = 0;i < 12;i++)
		{
			if (i == pnow)
			{
				continue;
			}

			if (G[pnow][i].size() > 0&&visited[pnow][i]<G[pnow][i].size())
			{
				visited[pnow][i]++;
				p.push(i);
				tag = 1;
				break;
			}
		}
		if (tag == 0)
		{
			p.pop();
		}
	}
}