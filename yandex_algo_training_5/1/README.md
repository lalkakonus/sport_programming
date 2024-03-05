<details>
<summary>Задача 1</summary>

<div class="problem-statement">
   <div class="header">
      <h1 class="title">A. Покраска деревьев</h1>
      <table>
         <tbody><tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>1&nbsp;секунда</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>64Mb</td>
         </tr>
         <tr class="input-file">
            <td class="property-title">Ввод</td>
            <td colspan="1">стандартный ввод или input.txt</td>
         </tr>
         <tr class="output-file">
            <td class="property-title">Вывод</td>
            <td colspan="1">стандартный вывод или output.txt</td>
         </tr>
      </tbody></table>
   </div>
   <h2></h2>
   <div class="legend"> Вася и Маша участвуют в субботнике и красят стволы деревьев в белый цвет. Деревья растут вдоль улицы через равные промежутки
      в 1 метр. Одно из деревьев обозначено числом ноль, деревья по одну сторону занумерованы положительными числами <!--l. 47--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-1-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-1" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-2" class="mjx-mrow"><span id="MJXc-Node-3" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">1</span></span><span id="MJXc-Node-4" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.553em;">,</span></span><span id="MJXc-Node-5" class="mjx-mn MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">2</span></span></span></span></span><script type="math/mml" id="MathJax-Element-1"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>,</mo><mn>2</mn></math></script>
      и т.д., а в другую&nbsp;— отрицательными <!--l. 47--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-2-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-6" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-7" class="mjx-mrow"><span id="MJXc-Node-8" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.308em; padding-bottom: 0.43em;">−</span></span><span id="MJXc-Node-9" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">1</span></span><span id="MJXc-Node-10" class="mjx-mo"><span class="mjx-char MJXc-TeX-main-R" style="margin-top: -0.18em; padding-bottom: 0.553em;">,</span></span><span id="MJXc-Node-11" class="mjx-mo MJXc-space1"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.308em; padding-bottom: 0.43em;">−</span></span><span id="MJXc-Node-12" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">2</span></span></span></span></span><script type="math/mml" id="MathJax-Element-2"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML">
      <mo>−</mo> <mn>1</mn><mo>,</mo><mo>−</mo><mn>2</mn></math></script> и т.д. <!--l. 49-->
      <p style="text-indent: 0em;">Ведро с краской для Васи установили возле дерева <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-3-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-13" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-14" class="mjx-mrow"><span id="MJXc-Node-15" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.109em;">P</span></span></span></span></span><script type="math/mml" id="MathJax-Element-3"><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>P</mi></math></script>, а для Маши&nbsp;— возле дерева <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-4-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-16" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-17" class="mjx-mrow"><span id="MJXc-Node-18" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.491em;">Q</span></span></span></span></span><script type="math/mml" id="MathJax-Element-4"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>Q</mi></math></script>. Ведра с краской очень тяжелые и Вася
      с Машей не могут их переставить, поэтому они окунают кисть в ведро и уже с этой кистью идут красить дерево. Краска на кисти
      из ведра Васи засыхает, когда он удаляется от ведра более чем на <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-5-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-19" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-20" class="mjx-mrow"><span id="MJXc-Node-21" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.186em;">V</span></span></span></span></span><script type="math/mml" id="MathJax-Element-5"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>V</mi> </math></script> метров, а из ведра Маши&nbsp;— на <!--l. 49--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-6-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-22" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-23" class="mjx-mrow"><span id="MJXc-Node-24" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.081em;">M</span></span></span></span></span><script type="math/mml" id="MathJax-Element-6"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math></script> метров. Определите, сколько деревьев
      может быть покрашено. </p>

   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> В первой строке содержится два целых числа <!--l. 52--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-7-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-25" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-26" class="mjx-mrow"><span id="MJXc-Node-27" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.109em;">P</span></span></span></span></span><script type="math/mml" id="MathJax-Element-7"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>P</mi></math></script>
      и <!--l. 52--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-8-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-28" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-29" class="mjx-mrow"><span id="MJXc-Node-30" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.186em;">V</span></span></span></span></span><script type="math/mml" id="MathJax-Element-8"><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>V</mi> </math></script>&nbsp;—
      номер дерева, у которого стоит ведро Васи и на сколько деревьев он может от него удаляться. <!--l. 54-->
      <p style="text-indent: 0em;">В второй строке содержится два целых числа <!--l. 54--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-9-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-31" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-32" class="mjx-mrow"><span id="MJXc-Node-33" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.491em;">Q</span></span></span></span></span><script type="math/mml" id="MathJax-Element-9"><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>Q</mi></math></script> и <!--l. 54--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-10-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-34" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-35" class="mjx-mrow"><span id="MJXc-Node-36" class="mjx-mi"><span class="mjx-char MJXc-TeX-math-I" style="padding-top: 0.491em; padding-bottom: 0.308em; padding-right: 0.081em;">M</span></span></span></span></span><script type="math/mml" id="MathJax-Element-10"><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math></script>&nbsp;— аналогичные данные для Маши. <!--l. 56-->
      </p><p style="text-indent: 0em;">Все числа целые и по модулю не превосходят <!--l. 56--><span class="MathJax_Preview" style="color: inherit; display: none;"></span><span id="MathJax-Element-11-Frame" class="mjx-chtml MathJax_CHTML" tabindex="0" style="font-size: 117%;"><span id="MJXc-Node-37" class="mjx-math" style="text-indent: 0em;"><span id="MJXc-Node-38" class="mjx-mrow"><span id="MJXc-Node-39" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">1</span></span><span id="MJXc-Node-40" class="mjx-msup"><span class="mjx-base"><span id="MJXc-Node-41" class="mjx-mrow"><span id="MJXc-Node-42" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">0</span></span></span></span><span class="mjx-sup" style="font-size: 70.7%; vertical-align: 0.591em; padding-left: 0px; padding-right: 0.071em;"><span id="MJXc-Node-43" class="mjx-mrow" style=""><span id="MJXc-Node-44" class="mjx-mn"><span class="mjx-char MJXc-TeX-main-R" style="padding-top: 0.369em; padding-bottom: 0.369em;">8</span></span></span></span></span></span></span></span><script type="math/mml" id="MathJax-Element-11"><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>8</mn></mrow></msup></math></script>.
      </p>
      <p></p>

   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> Выведите одно число&nbsp;— количество деревьев, которые могут быть покрашены. </div>
   <h2>Пример</h2>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>0 7
12 5
</pre></td>
            <td><pre>25
</pre></td>
         </tr>
      </tbody>
   </table>
</div>


</details>
