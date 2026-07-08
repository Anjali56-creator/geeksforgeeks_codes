<h2><a href="https://www.geeksforgeeks.org/problems/circle-of-strings4530/1?page=1&difficulty%5B%5D=1&category%5B%5D=Graph&sortBy=submissions">Circle of Strings</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr </strong>of lowercase strings, find if the strings can be chained together to form a circle.</span></p>
<ul>
<li><span style="font-size: 18px;">A string <strong>x </strong>can be chained together with another string <strong>y </strong>if the last character of <strong>x </strong>is the same as the first character of <strong>y. </strong></span></li>
<li><span style="font-size: 18px;">If every string of the array can be chained with exactly two strings of the array(one with the first character and the second with the last character of the string), it will form a circle.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = ["for", "geek", "rig", "kaf"]
<strong>Output: </strong>true
<strong>Explanation: </strong>These strings can be chained as "for" -&gt; "rig" -&gt; "geek" -&gt; "kaf" to form a circle.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr = ["abc", "bcd", "cdf"]
<strong>Output: </strong>false
<strong>Explanation: </strong>These strings can't form a circle.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong>&nbsp;<br>1 ≤ arr.size() ≤ 10^4<br></span><span style="font-size: 18px;">1 ≤ length of strings ≤ 20</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<code>Microsoft</code>&nbsp;<code>FactSet</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;