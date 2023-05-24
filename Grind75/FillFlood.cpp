class Solution {
public:
    void Fill(vector<vector<int>>& image, int sr, int sc, int color, int origin){
        if(sr - 1 >= 0){
            if(image[sr-1][sc] == origin){
                image[sr-1][sc] = color; 
                Fill(image, sr-1,sc,color,origin); 
            }
        }
        if(sr + 1 < image.size()){
            if(image[sr+1][sc] == origin){
                image[sr+1][sc] = color; 
                Fill(image, sr+1,sc,color,origin); 
            }
        }
        if(sc - 1 >= 0){
            if(image[sr][sc-1] == origin){
                image[sr][sc-1] = color; 
                Fill(image, sr,sc-1,color,origin); 
            }
        }
        if(sc + 1 < image[0].size()){
            if(image[sr][sc + 1] == origin){
                image[sr][sc+ 1] = color; 
                Fill(image, sr,sc+1,color,origin); 
            }
        }
        return; 
    }   

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)
            return image; 
        int origin = image[sr][sc];      
        image[sr][sc] = color;
        Fill(image, sr,sc,color,origin); 
        return image; 
    }
};

// Runtime: 7ms 
// Memory: 13.8MB