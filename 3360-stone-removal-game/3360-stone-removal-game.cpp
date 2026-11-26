class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;   // stones the current player must take
        bool aliceTurn = true;

        while (true) {
            if (n < remove) {
                // current player cannot move → they lose
                return !aliceTurn;   // Alice wins iff it's NOT Alice's turn
            }
            n -= remove;
            remove--;              // next player takes 1 fewer
            aliceTurn = !aliceTurn; // switch turn
        }
    }
};