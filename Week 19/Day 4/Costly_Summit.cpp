#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        string s;
        cin >> s;

        // Count frequency of each language (A=0, B=1, ..., E=4)
        int freq[5] = {0};
        for (char ch : s)
        {
            freq[ch - 'A']++;
        }

        // For each language, decide to learn or hire translators
        vector<int> translator_counts; // Number of people needing translators
        long long total_cost = 0;

        for (int i = 0; i < 5; i++)
        {
            if (freq[i] == 0)
                continue;
            long long trans_cost = (long long)freq[i] * (freq[i] + 1) / 2;
            if (c <= trans_cost)
            {
                total_cost += c; // Learn the language
            }
            else
            {
                translator_counts.push_back(freq[i]); // Hire translators
            }
        }

        // Assign translator costs efficiently
        vector<int> people;
        for (int count : translator_counts)
        {
            for (int j = 1; j <= count; j++)
            {
                people.push_back(j); // Costs 1, 2, ..., count
            }
        }
        sort(people.begin(), people.end()); // Minimize by using smallest costs first

        int translator_num = 1;
        for (int cost : people)
        {
            total_cost += translator_num;
            translator_num++;
        }

        cout << total_cost << endl;
    }
    return 0;
}