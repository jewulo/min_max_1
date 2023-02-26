#pragma once

/*
* code was generateded from ChatGPT
* 
The Minimax algorithm is a decision-making algorithm commonly used in
game theory and artificial intelligence.
It is used to determine the best move to make for a player in a game with
two players, assuming that both players are playing optimally.
The algorithm works by recursively evaluating the possible outcomes of each
move and selecting the move that maximizes the minimum outcome for the player.
The algorithm starts by considering all possible moves that the current player can make.
For each possible move, the algorithm recursively evaluates all possible moves that the
other player can make in response, assuming that the other player is also playing optimally.
This process continues until a terminal state is reached, such as a win, loss, or draw.
At this point, the algorithm assigns a score to the outcome based on whether it is a win, loss, or draw.

Once all possible outcomes have been evaluated for a given move, the algorithm selects the move that
leads to the best possible outcome for the current player, assuming that the other player will make
the move that leads to the worst possible outcome for the current player.
This is why the algorithm is called "minimax" - it seeks to minimize the maximum possible loss for the player.

The Minimax algorithm is commonly used in games such as chess, checkers, and tic-tac-toe,
where each player is trying to optimize their own chances of winning while also trying to
prevent the other player from winning. However, it can also be used in other contexts where
decision-making is required, such as in finance or logistics.
*/

/*
* 
In this implementation, Node represents a node in a binary tree, and findMaxSum is the function that
recursively evaluates the possible outcomes and returns the maximum sum.
The function takes two arguments: root, which is a pointer to the current node being evaluated, and isMaximizer,
which is a boolean that indicates whether the current player is the maximizer or the minimizer.

The algorithm works by first checking if the current node is a leaf node (i.e. it has no children).
If it is, then the function returns the value of the leaf node. Otherwise, it recursively evaluates
the possible outcomes of the left and right child nodes, and returns the maximum or minimum sum,
depending on whether the current player is the maximizer or the minimizer.

In the main function, we create a binary tree and call findMaxSum with the root node and isMaximizer
set to true, since we want to find the maximum sum. The output of the program is the maximum sum.
*/