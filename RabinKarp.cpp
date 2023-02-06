class RabinKarp  {
private:
    long long pow,module;
    vector<long long> hashTable ;
    vector<long long> powTable;
    string st;
public:
    RabinKarp(long long pow, long long module, string str) {
        this->st = str;
        this->pow = pow;
        this->module = module;
        this->calculateHashTableByString(str);
    }

    vector<long long> getHashTable() {
        return this->hashTable;
    }

    vector<long long> getPowTable() {
        return this->powTable;
    }

    long long getValueOfPowTable(int idx) {
        return this->powTable[idx];
    }

    long long getValueOfHashTable(int idx) {
        return this->hashTable[idx];
    }

    void calculateHashTableByString(string str){
        this->st = str;

        // calculate powTable
        this->powTable=vector<long long>(str.size());
        this->powTable[0] = 1;
        for (int i = 1; i < this->powTable.size(); ++i)
            this->powTable[i] = (this->powTable[i - 1] * this->pow) % this->module;

        // calculate hashTable
        this->hashTable = vector<long long>(str.size()+1, 0);
        for (int i = 0; i < str.size(); i++)
            this->hashTable[i + 1] = (this->hashTable[i] + (str[i] - 'a' + 1) * powTable[i]) % this->module;
    }

    long long getHashValueOfSubString(int from, int to) {
        return (this->hashTable[to + 1] + this->module - this->hashTable[from]) % this->module;
    }
};