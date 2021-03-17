# [Challenge 18 - Maximum path sum I](https://projecteuler.net/problem=18)

## Description

By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

<pre>
<code>   <b>3</b>   </code>
<code>  <b>7</b> 4  </code>
<code> 2 <b>4</b> 6 </code>
<code>8 5 <b>9</b> 3</code>
</pre>

That is, 3 + 7 + 4 + 9 = 23.

## Exercise

Find the maximum total from top to bottom of the triangle below:

<pre>
<code>                            75                            </code>
<code>                          95  64                          </code>
<code>                        17  47  82                        </code>
<code>                      18  35  87  10                      </code>
<code>                    20  04  82  47  65                    </code>
<code>                  19  01  23  75  03  34                  </code>
<code>                88  02  77  73  07  63  67                </code>
<code>              99  65  04  28  06  16  70  92              </code>
<code>            41  41  26  56  83  40  80  70  33            </code>
<code>          41  48  72  33  47  32  37  16  94  29          </code>
<code>        53  71  44  65  25  43  91  52  97  51  14        </code>
<code>      70  11  33  28  77  73  17  78  39  68  17  57      </code>
<code>    91  71  52  38  17  14  91  43  58  50  27  29  48    </code>
<code>  63  66  04  68  89  53  67  30  73  16  69  87  40  31  </code>
<code>04  62  98  27  23  09  70  98  73  93  38  53  60  04  23</code>
</pre>

**NOTE**: As there are only `16,384` routes, it is possible to solve this problem by trying every route.
However, [Challenge 67](../ch0067), is the same challenge with a triangle containing one-hundred rows;
it cannot be solved by brute force, and requires a clever method! 😮

## Solution

You can find the algorithm to solve this challenge inside [challenge.cpp](challenge.cpp).

The proposed algorithm finds the solution by brute force.

<details>
  <summary>Click here to see the result!</summary>

  Result is: `1,074`
</details>
