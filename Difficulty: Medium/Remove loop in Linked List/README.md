<h2><a href="https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab">Remove loop in Linked List</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p data-pm-slice="0 0 []"><span style="font-size: 14pt;">Given the<strong> head </strong>of a singly linked list, the task is to <strong>remove a cycle</strong> if present. A cycle exists when a node's next pointer points back to a previous node, forming a loop. <br></span></p>
<ul>
<li data-pm-slice="0 0 []"><span style="font-size: 14pt;">Internally, a variable <strong>pos</strong> is used to denotes the position of the node where the cycle starts, but it is not passed as a parameter.</span></li>
<li data-pm-slice="0 0 []"><span style="font-size: 14pt;">The linked list remains as it is if there is cycle in the list.</span></li>
<li data-pm-slice="0 0 []"><span style="font-size: 14pt;">The output will be "true" if your code works according to expectations, otherwise "false".&nbsp;</span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head =<strong> </strong>1 -&gt; 3 -&gt; 4, pos = 2
<strong>Output: </strong>true<strong>
Explanation: </strong>The linked list looks like<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928075/Web/Other/blobid0_1778490455.png" width="299" height="114"><br>A loop is present in the list, and it is removed.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head = 1 -&gt; 8 -&gt; 3 -&gt; 4, pos = 0
<strong>Output: </strong>true<strong>
Explanation: <br></strong><strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928075/Web/Other/blobid1_1778490488.png" width="581" height="80"><br></strong>The Linked list does not contains any loop. </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head =<strong> </strong>1 -&gt; 2 -&gt; 3 -&gt; 4, pos = 1
<strong>Output: </strong>true<strong>
Explanation: </strong>The linked list looks like <br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/928075/Web/Other/blobid2_1778490595.png" width="384" height="112"><br>A loop is present in the list, and it is removed.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ size of linked list ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>VMWare</code>&nbsp;<code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Oracle</code>&nbsp;<code>Walmart</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<code>Adobe</code>&nbsp;<code>Qualcomm</code>&nbsp;<code>Kuliza</code>&nbsp;<code>Netskope</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;