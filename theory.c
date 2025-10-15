#include <stdio.h>

int main(){

    /*
    *Bloack elements => The elements that  take whole line in a webpage and pushes next 
    thing on next line.
    *Inline-Block elements => The elements that take a limited space
    
    *void elements => which does not require a closing tag
    1) <link>
    2) <img>
    3) <input>

    **GRIDS in css =>
    use this css codes in <div> - 
    display: grid;
    grid-template-columns: (value) (value) (value);
    values can be in px / fr
    if there are more grids then values then it will start adding in next row

    HTML TAGS =>
    <p> = to create a paragraph 
    <a href="(link)"> = to link thinks
    <button> = to create a button
    <style> = use to add css to elements
    <strong> / <b> = used to bold text 
    <i> = used to make text italic
    <u> = used to make text underlined
    *<span> (it has no style of itself)= it is a tag which can be used to create a class 
    for a particular text which can be styled in css 
    *<link rel="(tells what is link about) href="(link)"> (it have no ending tag)
    *<img src="(path to image)"> (used to add image)
    *<input type="(type)"> (used to create things which can get a input)
    *<div> (creates a container in where different elements can be added)

    CSS SYNTHAX => html element {
        css property: css value;
    }
        *class attribute => is used to asign a class or target to a particular
        element in the html which has to be changed with css, start the name 
        of class with a . in <style>

        *pseudo class => is used to make a new style to a class when a particular
        action is done on it. some examples are -
            1) (class name):hover { } - (to apply a new style to existing class
            when mouse is moved on it)

            2) (class name):active { } - (to apply a new style to existing class 
            when it is made active)

    CSS Elements =>

    *opacity: (range from 0 to 1); (it fades the element has per the value)
    *transitions: (style of element to be changed) (time); (it is used to 
    add transitions between pseudo class)
    *box-shadow: (horizantal size) (vertical size) (blurness) (color); (it 
    is used to make shadows to elements)
    *padding-(direction): (size); (it adds space and is better option has compared 
    to height and width has it can handle overflow)
    *(direction)-align: (direction); (aligns the element in a direction)
    *display: (inline-block/block); (changes a element to anothe display type)

    *rgba({red value}, {green value}), {blue value}, {opacity};

    1) BUTTONS - background-color: (color); (changes background colour of button)
                 color: (color); (changes the colour of text in button)
                 height: (sixe in px); (changes the height of button)
                 width: (size in px); (changes the width of button)
                 border-radius: (size in px); (curves the border)
                 cursor: (type); (changes the cursor design)
                 margin-(direction): (size in px); (to add some margin)

    2) FONT - font-size: (size in px); (to change the size of font)
              font-weight: (style); (to change the style like bold, italic etc)
              text-align: (place); (to align the text)
              text-decoration: (style u want); (to decorate the text)
    
    3) IMAGE - width: (size); (it automatically adjusts height is not specified)
               object-fit: (cover/contain); (covers or contains the image in specified dimensions)
               object-position: (place); (to place the object in a direction)

    
  */
    return 0;
}