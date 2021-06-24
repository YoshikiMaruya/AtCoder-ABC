#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define reps(i, s, n) for (int i = (s); i < (n); i++)
using namespace std;
using ll = long long;
#define MOD 998244353

int main()
{
  char R, DIR;
  string S;
  int HH;

  cin >> R >> S >> DIR >> HH; //A A3 U 05

  int between_timeAU[13] = {0, 3, 5, 2, 3, 4, 3, 4, 2, 2, 3, 6, 2};
  int between_timeAD[13] = {0, 2, 6, 3, 2, 2, 4, 3, 4, 3, 5, 3, 0};
  int between_timeBU[6] = {0, 4, 3, 3, 2, 3};
  int between_timeBD[6] = {0, 3, 2, 3, 3, 4};
  int A7U[100] = {};
  int A1U[300] = {};
  //int A7D[]={};
  //int A13D[]={};
  int B1U[170] = {};
  int B6D[170] = {};
  int sumA = 0, sumB = 0, nA7U = 0, nA1U = 0, nB = 0;

  for (int i = 370; i < 1400; i += 10)
  {
    A7U[nA7U] = i;
    //cout<<A7U[n];
    nA7U++;
  }

  for (int i = 355; i <= 1375; i += 5)
  {
    A1U[nA1U] = i;
    //cout<<A1U[n]<<" , ";7u
    nA1U++;
  }

  for (int i = 360; i < 1380; i += 6)
  {
    B1U[nB] = i;
    nB++;
  }
  cout << nB;

  B6D[0] = 371;
  for (int i = 1; i < nB; i++)
  {
    B6D[i] = B6D[i - 1] + 6;
  }

  if (R == 'A')
  {
    if (DIR == 'U')
    {
      for (int i = 0; i < 13; i++)
      {
        sumA += between_timeAU[i];

        string num(to_string(i + 1));
        if (i < 8 && S == R + num)
        {
          for (int i = 0; i < nA1U; i++)
          {
            A1U[i] += sum;
            if (HH * 60 < A1U[i] && A1U[i] < (HH + 1) * 60 - 1)
            {
              cout << A1U[i] - HH * 60 << " ";
            }
          }
        }
        if (i >= 8 && S == R + num)
        {
          for (int i = 0; i < nA7U; i++)
          {
            A7U[i] += sum;
            if (HH * 60 < A7U[i] && A7U[i] < (HH + 1) * 60 - 1)
            {
              cout << A7U[i] - HH * 60 << " ";
            }
          }
        }
      }
    }
    else if (DIR == 'D')
    {
      for (int i = 0; i < 13; i++)
      {
        sumA += between_timeAD[i];

        string num(to_string(i + 1));
        if (i < 8 && S == R + num)
        {
          for (int j = 0; i < nA7U; j++)
          {
            A7U[j] += sumA;
            if (HH * 60 < A7U[j] && A7U[j] < (HH + 1) * 60 - 1)
            {
              cout << A7U[j] - HH * 60 << " ";
            }
          }
        }
        if (i >= 8 && S == R + num)
        {
          for (int j = 0; i < nA13U; j++)
          {
            A13U[j] += sumA;
            if (HH * 60 < A13U[j] && A13U[j] < (HH + 1) * 60 - 1)
            {
              cout << A13U[j] - HH * 60 << " ";
            }
          }
        }
      }
    }
  }
  else if (R == 'B')
  {
    if (DIR == 'U')
    {
      for (int i = 0; i < 6; i++)
      {
        sumB += between_timeBU[i];
      }
    }
    else if (DIR == 'D')
    {
    }
  }
}
