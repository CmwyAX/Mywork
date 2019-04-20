#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include"imfo.h"
using namespace std;
class  demand
{
public:
	demand(int dpt = 0,int avi = 0,int stg=1);
	~demand();
	int nametonum(string &str);
	int least_money(vector<imfo> &finalway);
	int least_time(vector<imfo> &finalway);
	int timeband_leastmoney(vector<imfo> &finalway);
	void DFS(vector<imfo> &finalway);
	void print();
	void output();
private:
	int departure;
	int arrvial;
	int time_range[2];
	vector<int> way_city;
	int strategy;
	int bound;
};
void initial_Grapah(int **Gra, imfo **Cmpl,int time_range[],int detime[],int departure);
void initial_Grapah(int **Gra, int time_range[], int detime[], int departure);
void initial_Grapah(int **Gra, int nowtime, int detime[], int departure);
void renew_Grapah(int **Gra, imfo **Cmpl, int nowtime);
void renew_Grapah(int **Gra, int nowtime);
int find_detime(int path[], int i);
void printRecurve(vector<int> a, vector<vector<int>>&b, int len, int k);
int factorial(int a);
void get_path_matrix(int source, float *min);
int SPFA(int source, float *min);
float get_money(float **matrix_min, int start, int end, int a[], int len);
void full_permutation(int a[], int len, int k, int start, int end, float &least_money, int *order, float **matrix_min);
float** get_min_matrix(string** min_money_number);
int ismeet(vector<int>way_city,int s[12]);
