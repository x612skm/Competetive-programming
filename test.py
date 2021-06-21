import cv2

trained_face_data = cv2.CascadeClassifier('harcascade_face.xml')

img = cv2.imread('Soubhik_Image.png')
cv2.imshow("hello ", img)
cv2.waitKey(0)
print("code complete")
"""
int minOperations(vector<int> arr, int threshold, int d) {
    
unordered_map<int,int>mp;

for(int i=0;i<arr.size();i++){

mp[arr[i]]++;

}

int res=-1;

for(auto x:mp){

if(res<x.second){

res=x.second;

}

}

res=arr.size()-res;

return res;

}

max_bitwise = 0
    for i in range(i,arr+1):
        bitwise = i
        if max_bitwise < bitwise < arr:
            max_bitwise = bitwise
    return max_bitwise
    """
'''
bitwise and hackerrank problem solving intermediate code
long countPairs(const vector<int>& arr) {
    long ans=0;
    int mx=0;
    map<int,int> mp;
    for(int ai : arr){
        mp[ai]++;
        mx = max(mx,ai);
    }
    for(int i=0; i<=mx; ++i){
        if(!mp.count(i)) continue;
        for(int j=i; j<=mx; ++j){
            if(!mp.count(j)) continue;
            // cout<<i<<':'<<mp[i]<<','<<j<<':'<<mp[j]<<'\n';
            if(__builtin_popcountll(i&j)==1){
                if(i==j) ans+=((long(mp[i])*(mp[i]-1))/2);
                else
                ans+= (long(mp[i])*mp[j]);
            }
        }
    }
    return ans;
}