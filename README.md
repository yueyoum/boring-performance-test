#　无聊的性能测试

测试以 `gcc -o <output_binary> <input_files>` 编译出的二进制文件运行时间作为基准，
记为1，其他的测试的结果都是这个基准的倍数

## Case 1 阶乘 Factorial 

计算一百万次10的阶乘

<table>
    <tr>
        <td>文件</td>
        <td>语言</td>
        <td>编译大小</td>
        <td>基准时间（倍数）</td>
    </tr>
    <tr>
        <td><a href="factorial.c">factorial.c</a></td>
        <td>C</td>
        <td>6.8k</td>
        <td>1</td>
    </tr>
    <tr>
        <td><a href="factorial.c">factorial.c</a></td>
        <td>C compile with gcc -O2</td>
        <td>6.8k</td>
        <td>0.05</td>
    </tr>
    <tr>
        <td><a href="factorial.ml">factorial.ml</a></td>
        <td>Ocaml 4.00.1 bytecode</td>
        <td>13k</td>
        <td>8.9</td>
    </tr>
    <tr>
        <td><a href="factorial.ml">factorial.ml</a></td>
        <td>Ocaml 4.00.1 compiled to Native code</td>
        <td>131k</td>
        <td>0.97</td>
    </tr>
    <tr>
        <td><a href="factorial.py">factorial.py</a></td>
        <td>Python 2.6.6</td>
        <td></td>
        <td>69.58</td>
    </tr>
    <tr>
        <td><a href="factorial.py">factorial.py</a></td>
        <td>Python Run with PyPy 2.0</td>
        <td></td>
        <td>5.36</td>
    </tr>
</table>

