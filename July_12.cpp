class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        uint32_t r;
        for(int i=0; i<32; i++)
        {
            r = n%2;
            n = n/2;
            result = result*2;
            result = result+r;
        }
        return result;
    }
};
