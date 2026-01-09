#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* ===================== BASE CLASS ===================== */

class Visualizer
{
protected:
    vector<int> arr;
    vector<int> current;

    void emit(const string& type, int depth, const string& value)
    {
        cout << type << " " << depth << " " << value << endl;
    }

    string vecToStr(const vector<int>& v)
    {
        string s = "[";
        for (int x : v) s += to_string(x) + " ";
        s += "]";
        return s;
    }
};

/* ===================== BINARY VISUALIZER ===================== */

class BinaryVisualizer : public Visualizer
{
public:
    BinaryVisualizer(const vector<int>& input)
    {
        arr = input; // arr[0] = length
    }

    void visualizeBinary(int idx)
    {
        if (idx == arr[0])
        {
            emit("output", idx, vecToStr(current));
            return;
        }

        emit("choose", idx, "0");
        current.push_back(0);
        visualizeBinary(idx + 1);
        current.pop_back();
        emit("backtrack", idx, "0");

        emit("choose", idx, "1");
        current.push_back(1);
        visualizeBinary(idx + 1);
        current.pop_back();
        emit("backtrack", idx, "1");
    }
};

/* ===================== SUBSET VISUALIZER ===================== */

class SubsetVisualizer : public Visualizer
{
public:
    SubsetVisualizer(const vector<int>& input)
    {
        arr = input;
    }

    void visualizeSubset(int idx)
    {
        if (idx == arr.size())
        {
            emit("output", idx, vecToStr(current));
            return;
        }

        emit("choose", idx, to_string(arr[idx]));
        current.push_back(arr[idx]);
        visualizeSubset(idx + 1);
        current.pop_back();
        emit("backtrack", idx, to_string(arr[idx]));

        emit("skip", idx, to_string(arr[idx]));
        visualizeSubset(idx + 1);
    }
};

/* ===================== COMBINATION VISUALIZER ===================== */

class CombinationVisualizer : public Visualizer
{
    int k;

public:
    CombinationVisualizer(const vector<int>& input, int k)
    {
        arr = input;
        this->k = k;
    }

    void visualizeCombination(int idx)
    {
        if (current.size() == k)
        {
            emit("output", idx, vecToStr(current));
            return;
        }

        if (idx == arr.size())
            return;

        emit("choose", idx, to_string(arr[idx]));
        current.push_back(arr[idx]);
        visualizeCombination(idx + 1);
        current.pop_back();
        emit("backtrack", idx, to_string(arr[idx]));

        emit("skip", idx, to_string(arr[idx]));
        visualizeCombination(idx + 1);
    }
};

/* ===================== PERMUTATION VISUALIZER ===================== */

class PermutationVisualizer : public Visualizer
{
public:
    PermutationVisualizer(const vector<int>& input)
    {
        arr = input;
    }

    void visualizePermutation(int depth)
    {
        if (depth == arr.size())
        {
            emit("output", depth, vecToStr(current));
            return;
        }

        for (int j = depth; j < arr.size(); j++)
        {
            swap(arr[depth], arr[j]);
            current.push_back(arr[depth]);

            emit("choose", depth, to_string(arr[depth]));
            visualizePermutation(depth + 1);

            current.pop_back();
            emit("backtrack", depth, to_string(arr[depth]));
            swap(arr[depth], arr[j]);
        }
    }
};

/* ===================== MAIN ===================== */

int main()
{
    string algorithm;
    cin >> algorithm;

    vector<int> arr;
    int x;
    while (cin >> x)
        arr.push_back(x);

    if (algorithm == "binary")
    {
        BinaryVisualizer bv(arr);
        bv.visualizeBinary(0);
    }
    else if (algorithm == "subset")
    {
        SubsetVisualizer sv(arr);
        sv.visualizeSubset(0);
    }
    else if (algorithm == "combination")
    {
        int k = 2;
        CombinationVisualizer cv(arr, k);
        cv.visualizeCombination(0);
    }
    else if (algorithm == "permutation")
    {
        PermutationVisualizer pv(arr);
        pv.visualizePermutation(0);
    }

    return 0;
}
