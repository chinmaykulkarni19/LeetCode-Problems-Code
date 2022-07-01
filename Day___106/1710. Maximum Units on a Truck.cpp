class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int totaltaken=0,numberofboxes=0,ans=0,i=0;
        for(i=0;i<boxTypes.size();i++)
        {
            numberofboxes+=boxTypes[i][0];
            if(numberofboxes<=truckSize)
            {
              totaltaken+=boxTypes[i][0];
              ans+=boxTypes[i][1]*boxTypes[i][0];
            }
            else
            {
                break;
            }
        }
        if(totaltaken<truckSize && i<boxTypes.size())
        {
          ans+=(truckSize-totaltaken)*boxTypes[i][1];  
        }
        return ans;
    }
};