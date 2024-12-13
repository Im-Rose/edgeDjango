<!DOCTYPE html>
<!-- saved from url=(0143)https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/ -->
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <meta name="theme-color" content="#323754">
        
        <meta name="description" content=" 
Prepare for your technical interviews by solving questions that are asked in interviews of various companies.
 HackerEarth is a global hub of 5M+ developers. We help companies accurately assess, interview, and hire top developers for a myriad of roles.">
        <link rel="canonical" href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/">
        <meta name="msvalidate.01" content="1BF418E510B5A17A2D71685C571BF4EB">
        <meta name="viewport" content="width=device-width,initial-scale=1.0">

        
        <meta name="referrer" content="strict-origin-when-cross-origin">
        

        
<meta name="google-site-verification" content="ozqyeStBcz4eehbY9Ohb_IUQcA4y8BKzzDCT-H1QPPc">


        
        
        <!-- Google Tag Manager -->
        <script src="./Number of steps _ Practice Problems_files/5799999160085112" async=""></script><script src="./Number of steps _ Practice Problems_files/802574803157043" async=""></script><script async="" src="./Number of steps _ Practice Problems_files/fbevents.js.download"></script><script type="text/javascript" async="" src="./Number of steps _ Practice Problems_files/js"></script><script async="" src="./Number of steps _ Practice Problems_files/gtm.js.download"></script><script>
            (function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
            new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
            j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
            'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
            })(window,document,'script','dataLayer','GTM-K5QQ3LB');
        </script>
        <!-- End Google Tag Manager -->
        
        

        <title>  Number of steps | Practice Problems </title>

        
<meta property="og:title" content="Number of steps | Practice Problems">
<meta property="og:image" content="https://cdn.hackerearth.com/static/hackerearth/images/logo/HE_cover.jpg">
<meta property="og:description" content="">
<meta property="og:url" content="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/">
<meta property="og:site_name" content="HackerEarth">
<meta property="og:type" content="hackerearth:problem">

<meta name="twitter:card" content="summary">
<meta name="twitter:site" content="@HackerEarth">
<meta name="twitter:url" content="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/">
<meta name="twitter:title" content="Number of steps | Practice Problems">


        
        <link rel="shortcut icon" href="https://cdn.hackerearth.com/static/hackerearth/images/logo/HE_identity.png" type="image/x-icon">
        

        

        
            <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/base_common_combined.fd68a2581441.css">
            <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/font-awesome.min.269550530cc1.css">
            <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/opensans.06e0aa7529dc.css">
            <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/unicons.9eda5fc182c1.css">
        

        


        

        <!-- Make the static variable available for all js files -->
        <script>
            var STATIC_URL = "https://cdn.hackerearth.com/static/";
            var RECAPTCHA_V3_SITE_KEY = "6LeyqcIZAAAAAOcy_5WJORJsuu9zmbZZxIRp4-em";
            var ssEnabled = false;
        </script>

        <!-- Store CSRF_COOKIE -->
        <script>
            var CSRF_COOKIE_USED = "True";
            var CSRF_COOKIE = "0gKFuLV8qjYijAjxDcdmLR6DjFOtLJflvvoLDAGAZHbxc3wVkTRH8kTgHVEHTGLV";
        </script>

        
        
       
       

        

    <style type="text/css">.MathJax_Hover_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_About.MathJax_MousePost {outline: none}
.MathJax_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 2px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax_MenuItem {padding: 2px 2em; background: transparent}
.MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax_MenuActive .MathJax_MenuArrow {color: white}
.MathJax_MenuArrow.RTL {left: .5em; right: auto}
.MathJax_MenuCheck {position: absolute; left: .7em}
.MathJax_MenuCheck.RTL {right: .7em; left: auto}
.MathJax_MenuRadioCheck {position: absolute; left: 1em}
.MathJax_MenuRadioCheck.RTL {right: 1em; left: auto}
.MathJax_MenuLabel {padding: 2px 2em 4px 1.33em; font-style: italic}
.MathJax_MenuRule {border-top: 1px solid #CCCCCC; margin: 4px 1px 0px}
.MathJax_MenuDisabled {color: GrayText}
.MathJax_MenuActive {background-color: Highlight; color: HighlightText}
.MathJax_MenuDisabled:focus, .MathJax_MenuLabel:focus {background-color: #E8E8E8}
.MathJax_ContextMenu:focus {outline: none}
.MathJax_ContextMenu .MathJax_MenuItem:focus {outline: none}
#MathJax_AboutClose {top: .2em; right: .2em}
.MathJax_Menu .MathJax_MenuClose {top: -10px; left: -10px}
.MathJax_MenuClose {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier New',Courier; font-size: 24px; color: #F0F0F0}
.MathJax_MenuClose span {display: block; background-color: #AAA; border: 1.5px solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
.MathJax_MenuClose:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_MenuClose:hover span {background-color: #CCC!important}
.MathJax_MenuClose:hover:focus {outline: none}
</style><style type="text/css">.MathJax_Preview .MJXf-math {color: inherit!important}
</style><style type="text/css">.MJX_Assistive_MathML {position: absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding: 1px 0 0 0!important; border: 0!important; height: 1px!important; width: 1px!important; overflow: hidden!important; display: block!important; -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none}
.MJX_Assistive_MathML.MJX_Assistive_MathML_Block {width: 100%!important}
</style><style type="text/css">#MathJax_Zoom {position: absolute; background-color: #F0F0F0; overflow: auto; display: block; z-index: 301; padding: .5em; border: 1px solid black; margin: 0; font-weight: normal; font-style: normal; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box; -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300; display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
#MathJax_ZoomFrame {position: relative; display: inline-block; height: 0; width: 0}
#MathJax_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302; display: inline-block; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
</style><style type="text/css">.MathJax_Preview {color: #888}
#MathJax_Message {position: fixed; left: 1em; bottom: 1.5em; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
#MathJax_MSIE_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index: 101; border: 0px; margin: 0px; padding: 0px}
.MathJax_Error {color: #CC0000; font-style: italic}
</style><style type="text/css">.MJXp-script {font-size: .8em}
.MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right; -ms-transform-origin: right; -o-transform-origin: right; transform-origin: right}
.MJXp-bold {font-weight: bold}
.MJXp-italic {font-style: italic}
.MJXp-scr {font-family: MathJax_Script,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-frak {font-family: MathJax_Fraktur,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-sf {font-family: MathJax_SansSerif,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-cal {font-family: MathJax_Caligraphic,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-mono {font-family: MathJax_Typewriter,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-largeop {font-size: 150%}
.MJXp-largeop.MJXp-int {vertical-align: -.2em}
.MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0; font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap; border-collapse: collapse}
.MJXp-display {display: block; text-align: center; margin: 1em 0}
.MJXp-math span {display: inline-block}
.MJXp-box {display: block!important; text-align: center}
.MJXp-box:after {content: " "}
.MJXp-rule {display: block!important; margin-top: .1em}
.MJXp-char {display: block!important}
.MJXp-mo {margin: 0 .15em}
.MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
.MJXp-denom {display: inline-table!important; width: 100%}
.MJXp-denom > * {display: table-row!important}
.MJXp-surd {vertical-align: top}
.MJXp-surd > * {display: block!important}
.MJXp-script-box > *  {display: table!important; height: 50%}
.MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
.MJXp-script-box > *:last-child > * {vertical-align: bottom}
.MJXp-script-box > * > * > * {display: block!important}
.MJXp-mphantom {visibility: hidden}
.MJXp-munderover, .MJXp-munder {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > *, .MJXp-munder > * {display: table-row!important}
.MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
.MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
.MJXp-mtr {display: table-row!important}
.MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0 .5em}
.MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-mlabeledtr {display: table-row!important}
.MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0); -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
.MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1); -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
.MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2); -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
.MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3); -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
.MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4); -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
.MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5); -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
.MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6); -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
.MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7); -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
.MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8); -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
.MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9); -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
.MathJax_PHTML .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style><style type="text/css">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
#MathJax_SVG_Tooltip {background-color: InfoBackground; color: InfoText; border: 1px solid black; box-shadow: 2px 2px 5px #AAAAAA; -webkit-box-shadow: 2px 2px 5px #AAAAAA; -moz-box-shadow: 2px 2px 5px #AAAAAA; -khtml-box-shadow: 2px 2px 5px #AAAAAA; padding: 3px 4px; z-index: 401; position: absolute; left: 0; top: 0; width: auto; height: auto; display: none}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.MathJax_SVG > div {display: inline-block}
.mjx-svg-href {fill: blue; stroke: blue}
.MathJax_SVG_Processing {visibility: hidden; position: absolute; top: 0; left: 0; width: 0; height: 0; overflow: hidden; display: block!important}
.MathJax_SVG_Processed {display: none!important}
.MathJax_SVG_test {font-style: normal; font-weight: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-transform: none; letter-spacing: normal; word-spacing: normal; overflow: hidden; height: 1px}
.MathJax_SVG_test.mjx-test-display {display: table!important}
.MathJax_SVG_test.mjx-test-inline {display: inline!important; margin-right: -1px}
.MathJax_SVG_test.mjx-test-default {display: block!important; clear: both}
.MathJax_SVG_ex_box {display: inline-block!important; position: absolute; overflow: hidden; min-height: 0; max-height: none; padding: 0; border: 0; margin: 0; width: 1px; height: 60ex}
.mjx-test-inline .MathJax_SVG_left_box {display: inline-block; width: 0; float: left}
.mjx-test-inline .MathJax_SVG_right_box {display: inline-block; width: 0; float: right}
.mjx-test-display .MathJax_SVG_right_box {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
.MathJax_SVG .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style><style type="text/css" media="screen" class="monaco-colors">.codicon-add:before { content: '\ea60'; }
.codicon-plus:before { content: '\ea60'; }
.codicon-gist-new:before { content: '\ea60'; }
.codicon-repo-create:before { content: '\ea60'; }
.codicon-lightbulb:before { content: '\ea61'; }
.codicon-light-bulb:before { content: '\ea61'; }
.codicon-repo:before { content: '\ea62'; }
.codicon-repo-delete:before { content: '\ea62'; }
.codicon-gist-fork:before { content: '\ea63'; }
.codicon-repo-forked:before { content: '\ea63'; }
.codicon-git-pull-request:before { content: '\ea64'; }
.codicon-git-pull-request-abandoned:before { content: '\ea64'; }
.codicon-record-keys:before { content: '\ea65'; }
.codicon-keyboard:before { content: '\ea65'; }
.codicon-tag:before { content: '\ea66'; }
.codicon-tag-add:before { content: '\ea66'; }
.codicon-tag-remove:before { content: '\ea66'; }
.codicon-person:before { content: '\ea67'; }
.codicon-person-follow:before { content: '\ea67'; }
.codicon-person-outline:before { content: '\ea67'; }
.codicon-person-filled:before { content: '\ea67'; }
.codicon-git-branch:before { content: '\ea68'; }
.codicon-git-branch-create:before { content: '\ea68'; }
.codicon-git-branch-delete:before { content: '\ea68'; }
.codicon-source-control:before { content: '\ea68'; }
.codicon-mirror:before { content: '\ea69'; }
.codicon-mirror-public:before { content: '\ea69'; }
.codicon-star:before { content: '\ea6a'; }
.codicon-star-add:before { content: '\ea6a'; }
.codicon-star-delete:before { content: '\ea6a'; }
.codicon-star-empty:before { content: '\ea6a'; }
.codicon-comment:before { content: '\ea6b'; }
.codicon-comment-add:before { content: '\ea6b'; }
.codicon-alert:before { content: '\ea6c'; }
.codicon-warning:before { content: '\ea6c'; }
.codicon-search:before { content: '\ea6d'; }
.codicon-search-save:before { content: '\ea6d'; }
.codicon-log-out:before { content: '\ea6e'; }
.codicon-sign-out:before { content: '\ea6e'; }
.codicon-log-in:before { content: '\ea6f'; }
.codicon-sign-in:before { content: '\ea6f'; }
.codicon-eye:before { content: '\ea70'; }
.codicon-eye-unwatch:before { content: '\ea70'; }
.codicon-eye-watch:before { content: '\ea70'; }
.codicon-circle-filled:before { content: '\ea71'; }
.codicon-primitive-dot:before { content: '\ea71'; }
.codicon-close-dirty:before { content: '\ea71'; }
.codicon-debug-breakpoint:before { content: '\ea71'; }
.codicon-debug-breakpoint-disabled:before { content: '\ea71'; }
.codicon-debug-hint:before { content: '\ea71'; }
.codicon-primitive-square:before { content: '\ea72'; }
.codicon-edit:before { content: '\ea73'; }
.codicon-pencil:before { content: '\ea73'; }
.codicon-info:before { content: '\ea74'; }
.codicon-issue-opened:before { content: '\ea74'; }
.codicon-gist-private:before { content: '\ea75'; }
.codicon-git-fork-private:before { content: '\ea75'; }
.codicon-lock:before { content: '\ea75'; }
.codicon-mirror-private:before { content: '\ea75'; }
.codicon-close:before { content: '\ea76'; }
.codicon-remove-close:before { content: '\ea76'; }
.codicon-x:before { content: '\ea76'; }
.codicon-repo-sync:before { content: '\ea77'; }
.codicon-sync:before { content: '\ea77'; }
.codicon-clone:before { content: '\ea78'; }
.codicon-desktop-download:before { content: '\ea78'; }
.codicon-beaker:before { content: '\ea79'; }
.codicon-microscope:before { content: '\ea79'; }
.codicon-vm:before { content: '\ea7a'; }
.codicon-device-desktop:before { content: '\ea7a'; }
.codicon-file:before { content: '\ea7b'; }
.codicon-file-text:before { content: '\ea7b'; }
.codicon-more:before { content: '\ea7c'; }
.codicon-ellipsis:before { content: '\ea7c'; }
.codicon-kebab-horizontal:before { content: '\ea7c'; }
.codicon-mail-reply:before { content: '\ea7d'; }
.codicon-reply:before { content: '\ea7d'; }
.codicon-organization:before { content: '\ea7e'; }
.codicon-organization-filled:before { content: '\ea7e'; }
.codicon-organization-outline:before { content: '\ea7e'; }
.codicon-new-file:before { content: '\ea7f'; }
.codicon-file-add:before { content: '\ea7f'; }
.codicon-new-folder:before { content: '\ea80'; }
.codicon-file-directory-create:before { content: '\ea80'; }
.codicon-trash:before { content: '\ea81'; }
.codicon-trashcan:before { content: '\ea81'; }
.codicon-history:before { content: '\ea82'; }
.codicon-clock:before { content: '\ea82'; }
.codicon-folder:before { content: '\ea83'; }
.codicon-file-directory:before { content: '\ea83'; }
.codicon-symbol-folder:before { content: '\ea83'; }
.codicon-logo-github:before { content: '\ea84'; }
.codicon-mark-github:before { content: '\ea84'; }
.codicon-github:before { content: '\ea84'; }
.codicon-terminal:before { content: '\ea85'; }
.codicon-console:before { content: '\ea85'; }
.codicon-repl:before { content: '\ea85'; }
.codicon-zap:before { content: '\ea86'; }
.codicon-symbol-event:before { content: '\ea86'; }
.codicon-error:before { content: '\ea87'; }
.codicon-stop:before { content: '\ea87'; }
.codicon-variable:before { content: '\ea88'; }
.codicon-symbol-variable:before { content: '\ea88'; }
.codicon-array:before { content: '\ea8a'; }
.codicon-symbol-array:before { content: '\ea8a'; }
.codicon-symbol-module:before { content: '\ea8b'; }
.codicon-symbol-package:before { content: '\ea8b'; }
.codicon-symbol-namespace:before { content: '\ea8b'; }
.codicon-symbol-object:before { content: '\ea8b'; }
.codicon-symbol-method:before { content: '\ea8c'; }
.codicon-symbol-function:before { content: '\ea8c'; }
.codicon-symbol-constructor:before { content: '\ea8c'; }
.codicon-symbol-boolean:before { content: '\ea8f'; }
.codicon-symbol-null:before { content: '\ea8f'; }
.codicon-symbol-numeric:before { content: '\ea90'; }
.codicon-symbol-number:before { content: '\ea90'; }
.codicon-symbol-structure:before { content: '\ea91'; }
.codicon-symbol-struct:before { content: '\ea91'; }
.codicon-symbol-parameter:before { content: '\ea92'; }
.codicon-symbol-type-parameter:before { content: '\ea92'; }
.codicon-symbol-key:before { content: '\ea93'; }
.codicon-symbol-text:before { content: '\ea93'; }
.codicon-symbol-reference:before { content: '\ea94'; }
.codicon-go-to-file:before { content: '\ea94'; }
.codicon-symbol-enum:before { content: '\ea95'; }
.codicon-symbol-value:before { content: '\ea95'; }
.codicon-symbol-ruler:before { content: '\ea96'; }
.codicon-symbol-unit:before { content: '\ea96'; }
.codicon-activate-breakpoints:before { content: '\ea97'; }
.codicon-archive:before { content: '\ea98'; }
.codicon-arrow-both:before { content: '\ea99'; }
.codicon-arrow-down:before { content: '\ea9a'; }
.codicon-arrow-left:before { content: '\ea9b'; }
.codicon-arrow-right:before { content: '\ea9c'; }
.codicon-arrow-small-down:before { content: '\ea9d'; }
.codicon-arrow-small-left:before { content: '\ea9e'; }
.codicon-arrow-small-right:before { content: '\ea9f'; }
.codicon-arrow-small-up:before { content: '\eaa0'; }
.codicon-arrow-up:before { content: '\eaa1'; }
.codicon-bell:before { content: '\eaa2'; }
.codicon-bold:before { content: '\eaa3'; }
.codicon-book:before { content: '\eaa4'; }
.codicon-bookmark:before { content: '\eaa5'; }
.codicon-debug-breakpoint-conditional-unverified:before { content: '\eaa6'; }
.codicon-debug-breakpoint-conditional:before { content: '\eaa7'; }
.codicon-debug-breakpoint-conditional-disabled:before { content: '\eaa7'; }
.codicon-debug-breakpoint-data-unverified:before { content: '\eaa8'; }
.codicon-debug-breakpoint-data:before { content: '\eaa9'; }
.codicon-debug-breakpoint-data-disabled:before { content: '\eaa9'; }
.codicon-debug-breakpoint-log-unverified:before { content: '\eaaa'; }
.codicon-debug-breakpoint-log:before { content: '\eaab'; }
.codicon-debug-breakpoint-log-disabled:before { content: '\eaab'; }
.codicon-briefcase:before { content: '\eaac'; }
.codicon-broadcast:before { content: '\eaad'; }
.codicon-browser:before { content: '\eaae'; }
.codicon-bug:before { content: '\eaaf'; }
.codicon-calendar:before { content: '\eab0'; }
.codicon-case-sensitive:before { content: '\eab1'; }
.codicon-check:before { content: '\eab2'; }
.codicon-checklist:before { content: '\eab3'; }
.codicon-chevron-down:before { content: '\eab4'; }
.codicon-drop-down-button:before { content: '\eab4'; }
.codicon-chevron-left:before { content: '\eab5'; }
.codicon-chevron-right:before { content: '\eab6'; }
.codicon-chevron-up:before { content: '\eab7'; }
.codicon-chrome-close:before { content: '\eab8'; }
.codicon-chrome-maximize:before { content: '\eab9'; }
.codicon-chrome-minimize:before { content: '\eaba'; }
.codicon-chrome-restore:before { content: '\eabb'; }
.codicon-circle-outline:before { content: '\eabc'; }
.codicon-debug-breakpoint-unverified:before { content: '\eabc'; }
.codicon-circle-slash:before { content: '\eabd'; }
.codicon-circuit-board:before { content: '\eabe'; }
.codicon-clear-all:before { content: '\eabf'; }
.codicon-clippy:before { content: '\eac0'; }
.codicon-close-all:before { content: '\eac1'; }
.codicon-cloud-download:before { content: '\eac2'; }
.codicon-cloud-upload:before { content: '\eac3'; }
.codicon-code:before { content: '\eac4'; }
.codicon-collapse-all:before { content: '\eac5'; }
.codicon-color-mode:before { content: '\eac6'; }
.codicon-comment-discussion:before { content: '\eac7'; }
.codicon-compare-changes:before { content: '\eafd'; }
.codicon-credit-card:before { content: '\eac9'; }
.codicon-dash:before { content: '\eacc'; }
.codicon-dashboard:before { content: '\eacd'; }
.codicon-database:before { content: '\eace'; }
.codicon-debug-continue:before { content: '\eacf'; }
.codicon-debug-disconnect:before { content: '\ead0'; }
.codicon-debug-pause:before { content: '\ead1'; }
.codicon-debug-restart:before { content: '\ead2'; }
.codicon-debug-start:before { content: '\ead3'; }
.codicon-debug-step-into:before { content: '\ead4'; }
.codicon-debug-step-out:before { content: '\ead5'; }
.codicon-debug-step-over:before { content: '\ead6'; }
.codicon-debug-stop:before { content: '\ead7'; }
.codicon-debug:before { content: '\ead8'; }
.codicon-device-camera-video:before { content: '\ead9'; }
.codicon-device-camera:before { content: '\eada'; }
.codicon-device-mobile:before { content: '\eadb'; }
.codicon-diff-added:before { content: '\eadc'; }
.codicon-diff-ignored:before { content: '\eadd'; }
.codicon-diff-modified:before { content: '\eade'; }
.codicon-diff-removed:before { content: '\eadf'; }
.codicon-diff-renamed:before { content: '\eae0'; }
.codicon-diff:before { content: '\eae1'; }
.codicon-discard:before { content: '\eae2'; }
.codicon-editor-layout:before { content: '\eae3'; }
.codicon-empty-window:before { content: '\eae4'; }
.codicon-exclude:before { content: '\eae5'; }
.codicon-extensions:before { content: '\eae6'; }
.codicon-eye-closed:before { content: '\eae7'; }
.codicon-file-binary:before { content: '\eae8'; }
.codicon-file-code:before { content: '\eae9'; }
.codicon-file-media:before { content: '\eaea'; }
.codicon-file-pdf:before { content: '\eaeb'; }
.codicon-file-submodule:before { content: '\eaec'; }
.codicon-file-symlink-directory:before { content: '\eaed'; }
.codicon-file-symlink-file:before { content: '\eaee'; }
.codicon-file-zip:before { content: '\eaef'; }
.codicon-files:before { content: '\eaf0'; }
.codicon-filter:before { content: '\eaf1'; }
.codicon-flame:before { content: '\eaf2'; }
.codicon-fold-down:before { content: '\eaf3'; }
.codicon-fold-up:before { content: '\eaf4'; }
.codicon-fold:before { content: '\eaf5'; }
.codicon-folder-active:before { content: '\eaf6'; }
.codicon-folder-opened:before { content: '\eaf7'; }
.codicon-gear:before { content: '\eaf8'; }
.codicon-gift:before { content: '\eaf9'; }
.codicon-gist-secret:before { content: '\eafa'; }
.codicon-gist:before { content: '\eafb'; }
.codicon-git-commit:before { content: '\eafc'; }
.codicon-git-compare:before { content: '\eafd'; }
.codicon-git-merge:before { content: '\eafe'; }
.codicon-github-action:before { content: '\eaff'; }
.codicon-github-alt:before { content: '\eb00'; }
.codicon-globe:before { content: '\eb01'; }
.codicon-grabber:before { content: '\eb02'; }
.codicon-graph:before { content: '\eb03'; }
.codicon-gripper:before { content: '\eb04'; }
.codicon-heart:before { content: '\eb05'; }
.codicon-home:before { content: '\eb06'; }
.codicon-horizontal-rule:before { content: '\eb07'; }
.codicon-hubot:before { content: '\eb08'; }
.codicon-inbox:before { content: '\eb09'; }
.codicon-issue-closed:before { content: '\eba4'; }
.codicon-issue-reopened:before { content: '\eb0b'; }
.codicon-issues:before { content: '\eb0c'; }
.codicon-italic:before { content: '\eb0d'; }
.codicon-jersey:before { content: '\eb0e'; }
.codicon-json:before { content: '\eb0f'; }
.codicon-kebab-vertical:before { content: '\eb10'; }
.codicon-key:before { content: '\eb11'; }
.codicon-law:before { content: '\eb12'; }
.codicon-lightbulb-autofix:before { content: '\eb13'; }
.codicon-link-external:before { content: '\eb14'; }
.codicon-link:before { content: '\eb15'; }
.codicon-list-ordered:before { content: '\eb16'; }
.codicon-list-unordered:before { content: '\eb17'; }
.codicon-live-share:before { content: '\eb18'; }
.codicon-loading:before { content: '\eb19'; }
.codicon-location:before { content: '\eb1a'; }
.codicon-mail-read:before { content: '\eb1b'; }
.codicon-mail:before { content: '\eb1c'; }
.codicon-markdown:before { content: '\eb1d'; }
.codicon-megaphone:before { content: '\eb1e'; }
.codicon-mention:before { content: '\eb1f'; }
.codicon-milestone:before { content: '\eb20'; }
.codicon-mortar-board:before { content: '\eb21'; }
.codicon-move:before { content: '\eb22'; }
.codicon-multiple-windows:before { content: '\eb23'; }
.codicon-mute:before { content: '\eb24'; }
.codicon-no-newline:before { content: '\eb25'; }
.codicon-note:before { content: '\eb26'; }
.codicon-octoface:before { content: '\eb27'; }
.codicon-open-preview:before { content: '\eb28'; }
.codicon-package:before { content: '\eb29'; }
.codicon-paintcan:before { content: '\eb2a'; }
.codicon-pin:before { content: '\eb2b'; }
.codicon-play:before { content: '\eb2c'; }
.codicon-run:before { content: '\eb2c'; }
.codicon-plug:before { content: '\eb2d'; }
.codicon-preserve-case:before { content: '\eb2e'; }
.codicon-preview:before { content: '\eb2f'; }
.codicon-project:before { content: '\eb30'; }
.codicon-pulse:before { content: '\eb31'; }
.codicon-question:before { content: '\eb32'; }
.codicon-quote:before { content: '\eb33'; }
.codicon-radio-tower:before { content: '\eb34'; }
.codicon-reactions:before { content: '\eb35'; }
.codicon-references:before { content: '\eb36'; }
.codicon-refresh:before { content: '\eb37'; }
.codicon-regex:before { content: '\eb38'; }
.codicon-remote-explorer:before { content: '\eb39'; }
.codicon-remote:before { content: '\eb3a'; }
.codicon-remove:before { content: '\eb3b'; }
.codicon-replace-all:before { content: '\eb3c'; }
.codicon-replace:before { content: '\eb3d'; }
.codicon-repo-clone:before { content: '\eb3e'; }
.codicon-repo-force-push:before { content: '\eb3f'; }
.codicon-repo-pull:before { content: '\eb40'; }
.codicon-repo-push:before { content: '\eb41'; }
.codicon-report:before { content: '\eb42'; }
.codicon-request-changes:before { content: '\eb43'; }
.codicon-rocket:before { content: '\eb44'; }
.codicon-root-folder-opened:before { content: '\eb45'; }
.codicon-root-folder:before { content: '\eb46'; }
.codicon-rss:before { content: '\eb47'; }
.codicon-ruby:before { content: '\eb48'; }
.codicon-save-all:before { content: '\eb49'; }
.codicon-save-as:before { content: '\eb4a'; }
.codicon-save:before { content: '\eb4b'; }
.codicon-screen-full:before { content: '\eb4c'; }
.codicon-screen-normal:before { content: '\eb4d'; }
.codicon-search-stop:before { content: '\eb4e'; }
.codicon-server:before { content: '\eb50'; }
.codicon-settings-gear:before { content: '\eb51'; }
.codicon-settings:before { content: '\eb52'; }
.codicon-shield:before { content: '\eb53'; }
.codicon-smiley:before { content: '\eb54'; }
.codicon-sort-precedence:before { content: '\eb55'; }
.codicon-split-horizontal:before { content: '\eb56'; }
.codicon-split-vertical:before { content: '\eb57'; }
.codicon-squirrel:before { content: '\eb58'; }
.codicon-star-full:before { content: '\eb59'; }
.codicon-star-half:before { content: '\eb5a'; }
.codicon-symbol-class:before { content: '\eb5b'; }
.codicon-symbol-color:before { content: '\eb5c'; }
.codicon-symbol-customcolor:before { content: '\eb5c'; }
.codicon-symbol-constant:before { content: '\eb5d'; }
.codicon-symbol-enum-member:before { content: '\eb5e'; }
.codicon-symbol-field:before { content: '\eb5f'; }
.codicon-symbol-file:before { content: '\eb60'; }
.codicon-symbol-interface:before { content: '\eb61'; }
.codicon-symbol-keyword:before { content: '\eb62'; }
.codicon-symbol-misc:before { content: '\eb63'; }
.codicon-symbol-operator:before { content: '\eb64'; }
.codicon-symbol-property:before { content: '\eb65'; }
.codicon-wrench:before { content: '\eb65'; }
.codicon-wrench-subaction:before { content: '\eb65'; }
.codicon-symbol-snippet:before { content: '\eb66'; }
.codicon-tasklist:before { content: '\eb67'; }
.codicon-telescope:before { content: '\eb68'; }
.codicon-text-size:before { content: '\eb69'; }
.codicon-three-bars:before { content: '\eb6a'; }
.codicon-thumbsdown:before { content: '\eb6b'; }
.codicon-thumbsup:before { content: '\eb6c'; }
.codicon-tools:before { content: '\eb6d'; }
.codicon-triangle-down:before { content: '\eb6e'; }
.codicon-triangle-left:before { content: '\eb6f'; }
.codicon-triangle-right:before { content: '\eb70'; }
.codicon-triangle-up:before { content: '\eb71'; }
.codicon-twitter:before { content: '\eb72'; }
.codicon-unfold:before { content: '\eb73'; }
.codicon-unlock:before { content: '\eb74'; }
.codicon-unmute:before { content: '\eb75'; }
.codicon-unverified:before { content: '\eb76'; }
.codicon-verified:before { content: '\eb77'; }
.codicon-versions:before { content: '\eb78'; }
.codicon-vm-active:before { content: '\eb79'; }
.codicon-vm-outline:before { content: '\eb7a'; }
.codicon-vm-running:before { content: '\eb7b'; }
.codicon-watch:before { content: '\eb7c'; }
.codicon-whitespace:before { content: '\eb7d'; }
.codicon-whole-word:before { content: '\eb7e'; }
.codicon-window:before { content: '\eb7f'; }
.codicon-word-wrap:before { content: '\eb80'; }
.codicon-zoom-in:before { content: '\eb81'; }
.codicon-zoom-out:before { content: '\eb82'; }
.codicon-list-filter:before { content: '\eb83'; }
.codicon-list-flat:before { content: '\eb84'; }
.codicon-list-selection:before { content: '\eb85'; }
.codicon-selection:before { content: '\eb85'; }
.codicon-list-tree:before { content: '\eb86'; }
.codicon-debug-breakpoint-function-unverified:before { content: '\eb87'; }
.codicon-debug-breakpoint-function:before { content: '\eb88'; }
.codicon-debug-breakpoint-function-disabled:before { content: '\eb88'; }
.codicon-debug-stackframe-active:before { content: '\eb89'; }
.codicon-circle-small-filled:before { content: '\eb8a'; }
.codicon-debug-stackframe-dot:before { content: '\eb8a'; }
.codicon-debug-stackframe:before { content: '\eb8b'; }
.codicon-debug-stackframe-focused:before { content: '\eb8b'; }
.codicon-debug-breakpoint-unsupported:before { content: '\eb8c'; }
.codicon-symbol-string:before { content: '\eb8d'; }
.codicon-debug-reverse-continue:before { content: '\eb8e'; }
.codicon-debug-step-back:before { content: '\eb8f'; }
.codicon-debug-restart-frame:before { content: '\eb90'; }
.codicon-call-incoming:before { content: '\eb92'; }
.codicon-call-outgoing:before { content: '\eb93'; }
.codicon-menu:before { content: '\eb94'; }
.codicon-expand-all:before { content: '\eb95'; }
.codicon-feedback:before { content: '\eb96'; }
.codicon-group-by-ref-type:before { content: '\eb97'; }
.codicon-ungroup-by-ref-type:before { content: '\eb98'; }
.codicon-account:before { content: '\eb99'; }
.codicon-bell-dot:before { content: '\eb9a'; }
.codicon-debug-console:before { content: '\eb9b'; }
.codicon-library:before { content: '\eb9c'; }
.codicon-output:before { content: '\eb9d'; }
.codicon-run-all:before { content: '\eb9e'; }
.codicon-sync-ignored:before { content: '\eb9f'; }
.codicon-pinned:before { content: '\eba0'; }
.codicon-github-inverted:before { content: '\eba1'; }
.codicon-debug-alt:before { content: '\eb91'; }
.codicon-server-process:before { content: '\eba2'; }
.codicon-server-environment:before { content: '\eba3'; }
.codicon-pass:before { content: '\eba4'; }
.codicon-stop-circle:before { content: '\eba5'; }
.codicon-play-circle:before { content: '\eba6'; }
.codicon-record:before { content: '\eba7'; }
.codicon-debug-alt-small:before { content: '\eba8'; }
.codicon-vm-connect:before { content: '\eba9'; }
.codicon-cloud:before { content: '\ebaa'; }
.codicon-merge:before { content: '\ebab'; }
.codicon-export:before { content: '\ebac'; }
.codicon-graph-left:before { content: '\ebad'; }
.codicon-magnet:before { content: '\ebae'; }
.codicon-notebook:before { content: '\ebaf'; }
.codicon-redo:before { content: '\ebb0'; }
.codicon-check-all:before { content: '\ebb1'; }
.codicon-pinned-dirty:before { content: '\ebb2'; }
.codicon-pass-filled:before { content: '\ebb3'; }
.codicon-circle-large-filled:before { content: '\ebb4'; }
.codicon-circle-large-outline:before { content: '\ebb5'; }
.codicon-combine:before { content: '\ebb6'; }
.codicon-gather:before { content: '\ebb6'; }
.codicon-table:before { content: '\ebb7'; }
.codicon-variable-group:before { content: '\ebb8'; }
.codicon-type-hierarchy:before { content: '\ebb9'; }
.codicon-type-hierarchy-sub:before { content: '\ebba'; }
.codicon-type-hierarchy-super:before { content: '\ebbb'; }
.codicon-git-pull-request-create:before { content: '\ebbc'; }
.codicon-run-above:before { content: '\ebbd'; }
.codicon-run-below:before { content: '\ebbe'; }
.codicon-notebook-template:before { content: '\ebbf'; }
.codicon-debug-rerun:before { content: '\ebc0'; }
.codicon-workspace-trusted:before { content: '\ebc1'; }
.codicon-workspace-untrusted:before { content: '\ebc2'; }
.codicon-workspace-unspecified:before { content: '\ebc3'; }
.codicon-terminal-cmd:before { content: '\ebc4'; }
.codicon-terminal-debian:before { content: '\ebc5'; }
.codicon-terminal-linux:before { content: '\ebc6'; }
.codicon-terminal-powershell:before { content: '\ebc7'; }
.codicon-terminal-tmux:before { content: '\ebc8'; }
.codicon-terminal-ubuntu:before { content: '\ebc9'; }
.codicon-terminal-bash:before { content: '\ebca'; }
.codicon-arrow-swap:before { content: '\ebcb'; }
.codicon-copy:before { content: '\ebcc'; }
.codicon-person-add:before { content: '\ebcd'; }
.codicon-filter-filled:before { content: '\ebce'; }
.codicon-wand:before { content: '\ebcf'; }
.codicon-debug-line-by-line:before { content: '\ebd0'; }
.codicon-inspect:before { content: '\ebd1'; }
.codicon-layers:before { content: '\ebd2'; }
.codicon-layers-dot:before { content: '\ebd3'; }
.codicon-layers-active:before { content: '\ebd4'; }
.codicon-compass:before { content: '\ebd5'; }
.codicon-compass-dot:before { content: '\ebd6'; }
.codicon-compass-active:before { content: '\ebd7'; }
.codicon-azure:before { content: '\ebd8'; }
.codicon-issue-draft:before { content: '\ebd9'; }
.codicon-git-pull-request-closed:before { content: '\ebda'; }
.codicon-git-pull-request-draft:before { content: '\ebdb'; }
.codicon-debug-all:before { content: '\ebdc'; }
.codicon-debug-coverage:before { content: '\ebdd'; }
.codicon-run-errors:before { content: '\ebde'; }
.codicon-folder-library:before { content: '\ebdf'; }
.codicon-debug-continue-small:before { content: '\ebe0'; }
.codicon-beaker-stop:before { content: '\ebe1'; }
.codicon-graph-line:before { content: '\ebe2'; }
.codicon-graph-scatter:before { content: '\ebe3'; }
.codicon-pie-chart:before { content: '\ebe4'; }
.codicon-bracket:before { content: '\eb0f'; }
.codicon-bracket-dot:before { content: '\ebe5'; }
.codicon-bracket-error:before { content: '\ebe6'; }
.codicon-lock-small:before { content: '\ebe7'; }
.codicon-azure-devops:before { content: '\ebe8'; }
.codicon-verified-filled:before { content: '\ebe9'; }
.codicon-newline:before { content: '\ebea'; }
.codicon-layout:before { content: '\ebeb'; }
.codicon-layout-activitybar-left:before { content: '\ebec'; }
.codicon-layout-activitybar-right:before { content: '\ebed'; }
.codicon-layout-panel-left:before { content: '\ebee'; }
.codicon-layout-panel-center:before { content: '\ebef'; }
.codicon-layout-panel-justify:before { content: '\ebf0'; }
.codicon-layout-panel-right:before { content: '\ebf1'; }
.codicon-layout-panel:before { content: '\ebf2'; }
.codicon-layout-sidebar-left:before { content: '\ebf3'; }
.codicon-layout-sidebar-right:before { content: '\ebf4'; }
.codicon-layout-statusbar:before { content: '\ebf5'; }
.codicon-layout-menubar:before { content: '\ebf6'; }
.codicon-layout-centered:before { content: '\ebf7'; }
.codicon-layout-sidebar-right-off:before { content: '\ec00'; }
.codicon-layout-panel-off:before { content: '\ec01'; }
.codicon-layout-sidebar-left-off:before { content: '\ec02'; }
.codicon-target:before { content: '\ebf8'; }
.codicon-indent:before { content: '\ebf9'; }
.codicon-record-small:before { content: '\ebfa'; }
.codicon-error-small:before { content: '\ebfb'; }
.codicon-arrow-circle-down:before { content: '\ebfc'; }
.codicon-arrow-circle-left:before { content: '\ebfd'; }
.codicon-arrow-circle-right:before { content: '\ebfe'; }
.codicon-arrow-circle-up:before { content: '\ebff'; }
.codicon-heart-filled:before { content: '\ec04'; }
.codicon-map:before { content: '\ec05'; }
.codicon-map-filled:before { content: '\ec06'; }
.codicon-circle-small:before { content: '\ec07'; }
.codicon-bell-slash:before { content: '\ec08'; }
.codicon-bell-slash-dot:before { content: '\ec09'; }
.codicon-comment-unresolved:before { content: '\ec0a'; }
.codicon-git-pull-request-go-to-changes:before { content: '\ec0b'; }
.codicon-git-pull-request-new-changes:before { content: '\ec0c'; }
.codicon-dialog-error:before { content: '\ea87'; }
.codicon-dialog-warning:before { content: '\ea6c'; }
.codicon-dialog-info:before { content: '\ea74'; }
.codicon-dialog-close:before { content: '\ea76'; }
.codicon-tree-item-expanded:before { content: '\eab4'; }
.codicon-tree-filter-on-type-on:before { content: '\eb83'; }
.codicon-tree-filter-on-type-off:before { content: '\eb85'; }
.codicon-tree-filter-clear:before { content: '\ea76'; }
.codicon-tree-item-loading:before { content: '\eb19'; }
.codicon-menu-selection:before { content: '\eab2'; }
.codicon-menu-submenu:before { content: '\eab6'; }
.codicon-menubar-more:before { content: '\ea7c'; }
.codicon-scrollbar-button-left:before { content: '\eb6f'; }
.codicon-scrollbar-button-right:before { content: '\eb70'; }
.codicon-scrollbar-button-up:before { content: '\eb71'; }
.codicon-scrollbar-button-down:before { content: '\eb6e'; }
.codicon-toolbar-more:before { content: '\ea7c'; }
.codicon-quick-input-back:before { content: '\ea9b'; }
.codicon-widget-close:before { content: '\ea76'; }
.codicon-goto-previous-location:before { content: '\eaa1'; }
.codicon-goto-next-location:before { content: '\ea9a'; }
.codicon-marker-navigation-next:before { content: '\ea9a'; }
.codicon-marker-navigation-previous:before { content: '\eaa1'; }
.codicon-find-selection:before { content: '\eb85'; }
.codicon-find-collapsed:before { content: '\eab6'; }
.codicon-find-expanded:before { content: '\eab4'; }
.codicon-find-replace:before { content: '\eb3d'; }
.codicon-find-replace-all:before { content: '\eb3c'; }
.codicon-find-previous-match:before { content: '\eaa1'; }
.codicon-find-next-match:before { content: '\ea9a'; }
.codicon-folding-expanded:before { content: '\eab4'; }
.codicon-folding-collapsed:before { content: '\eab6'; }
.codicon-folding-manual-collapsed:before { content: '\eab6'; }
.codicon-folding-manual-expanded:before { content: '\eab4'; }
.codicon-suggest-more-info:before { content: '\eab6'; }
.codicon-parameter-hints-next:before { content: '\eab4'; }
.codicon-parameter-hints-previous:before { content: '\eab7'; }
.codicon-extensions-warning-message:before { content: '\ea6c'; }
.codicon-diff-review-insert:before { content: '\ea60'; }
.codicon-diff-review-remove:before { content: '\eb3b'; }
.codicon-diff-review-close:before { content: '\ea76'; }
.codicon-diff-insert:before { content: '\ea60'; }
.codicon-diff-remove:before { content: '\eb3b'; }
.codicon-settings-sync-view-icon:before { content: '\ea77'; }
.monaco-editor .accessibilityHelpWidget { background-color: #252526; }
.monaco-editor .accessibilityHelpWidget { color: #cccccc; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px rgba(0, 0, 0, 0.36); }
.monaco-editor, .monaco-editor-background { background-color: #1e1e1e; }
.monaco-editor .inputarea.ime-input { background-color: #1e1e1e; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #d4d4d4; }
.monaco-editor .margin { background-color: #1e1e1e; }
.monaco-editor .rangeHighlight { background-color: rgba(255, 255, 255, 0.04); }
.monaco-editor .symbolHighlight { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .mtkw { color: rgba(227, 228, 226, 0.16) !important; }
.monaco-editor .mtkz { color: rgba(227, 228, 226, 0.16) !important; }
.monaco-editor .unexpected-closing-bracket { color: rgba(255, 18, 18, 0.8); }
.monaco-editor .bracket-highlighting-0 { color: #ffd700; }
.monaco-editor .bracket-highlighting-1 { color: #da70d6; }
.monaco-editor .bracket-highlighting-2 { color: #179fff; }
.monaco-editor .bracket-highlighting-3 { color: #ffd700; }
.monaco-editor .bracket-highlighting-4 { color: #da70d6; }
.monaco-editor .bracket-highlighting-5 { color: #179fff; }
.monaco-editor .bracket-highlighting-6 { color: #ffd700; }
.monaco-editor .bracket-highlighting-7 { color: #da70d6; }
.monaco-editor .bracket-highlighting-8 { color: #179fff; }
.monaco-editor .bracket-highlighting-9 { color: #ffd700; }
.monaco-editor .bracket-highlighting-10 { color: #da70d6; }
.monaco-editor .bracket-highlighting-11 { color: #179fff; }
.monaco-editor .bracket-highlighting-12 { color: #ffd700; }
.monaco-editor .bracket-highlighting-13 { color: #da70d6; }
.monaco-editor .bracket-highlighting-14 { color: #179fff; }
.monaco-editor .bracket-highlighting-15 { color: #ffd700; }
.monaco-editor .bracket-highlighting-16 { color: #da70d6; }
.monaco-editor .bracket-highlighting-17 { color: #179fff; }
.monaco-editor .bracket-highlighting-18 { color: #ffd700; }
.monaco-editor .bracket-highlighting-19 { color: #da70d6; }
.monaco-editor .bracket-highlighting-20 { color: #179fff; }
.monaco-editor .bracket-highlighting-21 { color: #ffd700; }
.monaco-editor .bracket-highlighting-22 { color: #da70d6; }
.monaco-editor .bracket-highlighting-23 { color: #179fff; }
.monaco-editor .bracket-highlighting-24 { color: #ffd700; }
.monaco-editor .bracket-highlighting-25 { color: #da70d6; }
.monaco-editor .bracket-highlighting-26 { color: #179fff; }
.monaco-editor .bracket-highlighting-27 { color: #ffd700; }
.monaco-editor .bracket-highlighting-28 { color: #da70d6; }
.monaco-editor .bracket-highlighting-29 { color: #179fff; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #888888; }

		.monaco-editor .contentWidgets .codicon.codicon-light-bulb {
			color: #ffcc00;
			background-color: rgba(30, 30, 30, 0.7);
		}

		.monaco-editor .contentWidgets .codicon.codicon-lightbulb-autofix {
			color: #75beff;
			background-color: rgba(30, 30, 30, 0.7);
		}
.monaco-editor .line-numbers { color: #858585; }
.monaco-editor .line-numbers.active-line-number { color: #c6c6c6; }
.monaco-editor .view-overlays .current-line { border: 2px solid #282828; }
.monaco-editor .margin-view-overlays .current-line-margin { border: 2px solid #282828; }

			.monaco-scrollable-element > .shadow.top {
				box-shadow: #000000 0 6px 6px -6px inset;
			}

			.monaco-scrollable-element > .shadow.left {
				box-shadow: #000000 6px 0 6px -6px inset;
			}

			.monaco-scrollable-element > .shadow.top.left {
				box-shadow: #000000 6px 6px 6px -6px inset;
			}
		

			.monaco-scrollable-element > .scrollbar > .slider {
				background: rgba(55, 65, 64, 0.31);
			}
		

			.monaco-scrollable-element > .scrollbar > .slider:hover {
				background: rgba(100, 100, 100, 0.7);
			}
		

			.monaco-scrollable-element > .scrollbar > .slider.active {
				background: #374140;
			}
		
.monaco-editor .lines-content .core-guide-indent { box-shadow: 1px 0 0 0 #404040 inset; }
.monaco-editor .lines-content .core-guide-indent-active { box-shadow: 1px 0 0 0 #707070 inset; }
.monaco-editor .bracket-indent-guide.lvl-0 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-1 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-2 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-3 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-4 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-5 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-6 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-7 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-8 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-9 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-10 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-11 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-12 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-13 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-14 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-15 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-16 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-17 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-18 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-19 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-20 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-21 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-22 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-23 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-24 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-25 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-26 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-27 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-28 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-29 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .vertical { box-shadow: 1px 0 0 0 var(--guide-color) inset; }
.monaco-editor .horizontal-top { border-top: 1px solid var(--guide-color); }
.monaco-editor .horizontal-bottom { border-bottom: 1px solid var(--guide-color); }
.monaco-editor .vertical.indent-active { box-shadow: 1px 0 0 0 var(--guide-color-active) inset; }
.monaco-editor .horizontal-top.indent-active { border-top: 1px solid var(--guide-color-active); }
.monaco-editor .horizontal-bottom.indent-active { border-bottom: 1px solid var(--guide-color-active); }
.monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(55, 65, 64, 0.16); }
.monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(55, 65, 64, 0.5); }
.monaco-editor .minimap-shadow-visible { box-shadow: #000000 -6px 0 6px -6px inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #5a5a5a inset; }
.monaco-editor .scroll-decoration { box-shadow: #000000 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: rgba(64, 168, 243, 0.28); }
.monaco-editor .selected-text { background-color: #3a3d41; }
.monaco-editor .inputarea.ime-input { caret-color: #66b9f4; }
.monaco-editor .cursors-layer .cursor { background-color: #66b9f4; border-color: #66b9f4; color: #99460b; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23f14c4c'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23ffd399'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%233794ff'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22rgba(238%2C%20238%2C%20238%2C%200.7)%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.monaco-editor.showUnused .squiggly-inline-unnecessary { opacity: 0.667; }
.monaco-editor.showDeprecated .squiggly-inline-deprecated { text-decoration: line-through; text-decoration-color: #d4d4d4}
.monaco-editor .goto-definition-link { color: #4e94ce !important; }

			.monaco-editor .zone-widget .codicon.codicon-error,
			.markers-panel .marker-icon.codicon.codicon-error,
			.text-search-provider-messages .providerMessage .codicon.codicon-error,
			.extensions-viewlet > .extensions .codicon.codicon-error {
				color: #f14c4c;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-warning,
			.markers-panel .marker-icon.codicon.codicon-warning,
			.extensions-viewlet > .extensions .codicon.codicon-warning,
			.extension-editor .codicon.codicon-warning,
			.text-search-provider-messages .providerMessage .codicon.codicon-warning,
			.preferences-editor .codicon.codicon-warning {
				color: #ffd399;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-info,
			.markers-panel .marker-icon.codicon.codicon-info,
			.extensions-viewlet > .extensions .codicon.codicon-info,
			.text-search-provider-messages .providerMessage .codicon.codicon-info,
			.extension-editor .codicon.codicon-info {
				color: #3794ff;
			}
		
.monaco-hover .hover-contents a.code-link span { color: #3794ff; }
.monaco-hover .hover-contents a.code-link span:hover { color: #3794ff; }
.monaco-editor .hoverHighlight { background-color: rgba(38, 79, 120, 0.25); }
.monaco-editor .monaco-hover { background-color: #1e1e1e; }
.monaco-editor .monaco-hover { border: 1px solid #111518; }
.monaco-editor .monaco-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(17, 21, 24, 0.5); }
.monaco-editor .monaco-hover hr { border-top: 1px solid rgba(17, 21, 24, 0.5); }
.monaco-editor .monaco-hover hr { border-bottom: 0px solid rgba(17, 21, 24, 0.5); }
.monaco-editor .monaco-hover a { color: #3794ff; }
.monaco-editor .monaco-hover a:hover { color: #3794ff; }
.monaco-editor .monaco-hover { color: #cccccc; }
.monaco-editor .monaco-hover .hover-row .actions { background-color: #242424; }
.monaco-editor .monaco-hover code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .findOptionsWidget { background-color: #252526; }
.monaco-editor .findOptionsWidget { color: #cccccc; }
.monaco-editor .findOptionsWidget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.36); }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #515c6a; }
.monaco-editor .findScope { background-color: rgba(58, 61, 65, 0.4); }
.monaco-editor .find-widget { background-color: #252526; }
.monaco-editor .find-widget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.36); }
.monaco-editor .find-widget { color: #cccccc; }
.monaco-editor .find-widget.no-results .matchesCount { color: #f48771; }
.monaco-editor .find-widget .monaco-sash { background-color: #454545; }

		.monaco-editor .find-widget .button:not(.disabled):hover,
		.monaco-editor .find-widget .codicon-find-selection:hover {
			background-color: rgba(90, 93, 94, 0.31) !important;
		}
	
.monaco-editor .find-widget .monaco-inputbox.synthetic-focus { outline-color: #66b9f4; }
.monaco-editor .folded-background { background-color: rgba(64, 168, 243, 0.09); }

		.monaco-editor .cldr.codicon.codicon-folding-expanded,
		.monaco-editor .cldr.codicon.codicon-folding-collapsed,
		.monaco-editor .cldr.codicon.codicon-folding-manual-expanded,
		.monaco-editor .cldr.codicon.codicon-folding-manual-collapsed {
			color: #c5c5c5 !important;
		}
		
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #888888; }
.codicon.codicon-symbol-array { color: #cccccc; }
.codicon.codicon-symbol-boolean { color: #cccccc; }
.codicon.codicon-symbol-class { color: #ee9d28; }
.codicon.codicon-symbol-method { color: #b180d7; }
.codicon.codicon-symbol-color { color: #cccccc; }
.codicon.codicon-symbol-constant { color: #cccccc; }
.codicon.codicon-symbol-constructor { color: #b180d7; }

			.codicon.codicon-symbol-value,.codicon.codicon-symbol-enum { color: #ee9d28; }
.codicon.codicon-symbol-enum-member { color: #75beff; }
.codicon.codicon-symbol-event { color: #ee9d28; }
.codicon.codicon-symbol-field { color: #75beff; }
.codicon.codicon-symbol-file { color: #cccccc; }
.codicon.codicon-symbol-folder { color: #cccccc; }
.codicon.codicon-symbol-function { color: #b180d7; }
.codicon.codicon-symbol-interface { color: #75beff; }
.codicon.codicon-symbol-key { color: #cccccc; }
.codicon.codicon-symbol-keyword { color: #cccccc; }
.codicon.codicon-symbol-module { color: #cccccc; }
.codicon.codicon-symbol-namespace { color: #cccccc; }
.codicon.codicon-symbol-null { color: #cccccc; }
.codicon.codicon-symbol-number { color: #cccccc; }
.codicon.codicon-symbol-object { color: #cccccc; }
.codicon.codicon-symbol-operator { color: #cccccc; }
.codicon.codicon-symbol-package { color: #cccccc; }
.codicon.codicon-symbol-property { color: #cccccc; }
.codicon.codicon-symbol-reference { color: #cccccc; }
.codicon.codicon-symbol-snippet { color: #cccccc; }
.codicon.codicon-symbol-string { color: #cccccc; }
.codicon.codicon-symbol-struct { color: #cccccc; }
.codicon.codicon-symbol-text { color: #cccccc; }
.codicon.codicon-symbol-type-parameter { color: #cccccc; }
.codicon.codicon-symbol-unit { color: #cccccc; }
.codicon.codicon-symbol-variable { color: #75beff; }
.monaco-editor .ghost-text-decoration { color: rgba(255, 255, 255, 0.34) !important; }
.monaco-editor .ghost-text-decoration-preview { color: rgba(255, 255, 255, 0.34) !important; }
.monaco-editor .suggest-preview-text .ghost-text { color: rgba(255, 255, 255, 0.34) !important; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #111518; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #111518; }
.monaco-editor .tokens-inspect-widget { background-color: #1e1e1e; }
.monaco-editor .tokens-inspect-widget { color: #cccccc; }
.monaco-editor .linked-editing-decoration { background: rgba(255, 0, 0, 0.3); border-left-color: rgba(255, 0, 0, 0.3); }
.monaco-editor .detected-link-active { color: #4e94ce !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #111518; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(17, 21, 24, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(17, 21, 24, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #1e1e1e; }
.monaco-editor .parameter-hints-widget a { color: #3794ff; }
.monaco-editor .parameter-hints-widget a:hover { color: #3794ff; }
.monaco-editor .parameter-hints-widget { color: #cccccc; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .parameter-hints-widget .parameter.active { color: #2aaaff}
.monaco-link { color: #3794ff; }
.monaco-link:hover { color: #3794ff; }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.07); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.72); }
.monaco-editor .wordHighlightStrong { background-color: rgba(0, 73, 114, 0.72); }
.monaco-diff-editor .diff-review-line-number { color: #858585; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #000000 0 -6px 6px -6px inset; }
.monaco-editor .char-insert, .monaco-diff-editor .char-insert { background-color: rgba(156, 204, 44, 0.2); }
.monaco-editor .line-insert, .monaco-diff-editor .line-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .gutter-insert, .monaco-diff-editor .gutter-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .char-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.4); }
.monaco-editor .line-delete, .monaco-diff-editor .line-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .gutter-delete, .monaco-diff-editor .gutter-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #000000; }

			.monaco-diff-editor .diffViewport {
				background: rgba(55, 65, 64, 0.31);
			}
		

			.monaco-diff-editor .diffViewport:hover {
				background: rgba(100, 100, 100, 0.7);
			}
		

			.monaco-diff-editor .diffViewport:active {
				background: #374140;
			}
		

	.monaco-editor .diagonal-fill {
		background-image: linear-gradient(
			-45deg,
			rgba(204, 204, 204, 0.2) 12.5%,
			#0000 12.5%, #0000 50%,
			rgba(204, 204, 204, 0.2) 50%, rgba(204, 204, 204, 0.2) 62.5%,
			#0000 62.5%, #0000 100%
		);
		background-size: 8px 8px;
	}
	
.monaco-editor { --vscode-foreground: #cccccc;
--vscode-disabledForeground: rgba(204, 204, 204, 0.5);
--vscode-errorForeground: #f48771;
--vscode-descriptionForeground: rgba(204, 204, 204, 0.7);
--vscode-icon-foreground: #c5c5c5;
--vscode-focusBorder: #66b9f4;
--vscode-textSeparator-foreground: rgba(255, 255, 255, 0.18);
--vscode-textLink-foreground: #3794ff;
--vscode-textLink-activeForeground: #3794ff;
--vscode-textPreformat-foreground: #d7ba7d;
--vscode-textBlockQuote-background: rgba(127, 127, 127, 0.1);
--vscode-textBlockQuote-border: rgba(0, 122, 204, 0.5);
--vscode-textCodeBlock-background: rgba(10, 10, 10, 0.4);
--vscode-widget-shadow: rgba(0, 0, 0, 0.36);
--vscode-input-background: #111518;
--vscode-input-foreground: #c0c0c0;
--vscode-inputOption-activeBorder: #66b9f4;
--vscode-inputOption-hoverBackground: rgba(90, 93, 94, 0.5);
--vscode-inputOption-activeBackground: rgba(102, 185, 244, 0.4);
--vscode-inputOption-activeForeground: #ffffff;
--vscode-input-placeholderForeground: rgba(204, 204, 204, 0.5);
--vscode-inputValidation-infoBackground: #063b49;
--vscode-inputValidation-infoBorder: #007acc;
--vscode-inputValidation-warningBackground: #352a05;
--vscode-inputValidation-warningBorder: #b89500;
--vscode-inputValidation-errorBackground: #5a1d1d;
--vscode-inputValidation-errorBorder: #be1100;
--vscode-dropdown-background: #3c3c3c;
--vscode-dropdown-foreground: #f0f0f0;
--vscode-dropdown-border: #3c3c3c;
--vscode-checkbox-background: #3c3c3c;
--vscode-checkbox-foreground: #f0f0f0;
--vscode-checkbox-border: #3c3c3c;
--vscode-button-foreground: #ffffff;
--vscode-button-separator: rgba(255, 255, 255, 0.4);
--vscode-button-background: #40a9f3;
--vscode-button-hoverBackground: #66b9f4;
--vscode-button-secondaryForeground: #ffffff;
--vscode-button-secondaryBackground: #3a3d41;
--vscode-button-secondaryHoverBackground: #45494e;
--vscode-badge-background: #374140;
--vscode-badge-foreground: #ffffff;
--vscode-scrollbar-shadow: #000000;
--vscode-scrollbarSlider-background: rgba(55, 65, 64, 0.31);
--vscode-scrollbarSlider-hoverBackground: rgba(100, 100, 100, 0.7);
--vscode-scrollbarSlider-activeBackground: #374140;
--vscode-progressBar-background: #0e70c0;
--vscode-editorError-foreground: #f14c4c;
--vscode-editorWarning-foreground: #ffd399;
--vscode-editorInfo-foreground: #3794ff;
--vscode-editorHint-foreground: rgba(238, 238, 238, 0.7);
--vscode-sash-hoverBorder: #66b9f4;
--vscode-editor-background: #1e1e1e;
--vscode-editor-foreground: #d4d4d4;
--vscode-editorStickyScroll-background: #1e1e1e;
--vscode-editorStickyScrollHover-background: #2a2d2e;
--vscode-editorWidget-background: #252526;
--vscode-editorWidget-foreground: #cccccc;
--vscode-editorWidget-border: #454545;
--vscode-quickInput-background: #252526;
--vscode-quickInput-foreground: #cccccc;
--vscode-quickInputTitle-background: rgba(255, 255, 255, 0.1);
--vscode-pickerGroup-foreground: #3794ff;
--vscode-pickerGroup-border: #3f3f46;
--vscode-keybindingLabel-background: rgba(128, 128, 128, 0.17);
--vscode-keybindingLabel-foreground: #cccccc;
--vscode-keybindingLabel-border: rgba(51, 51, 51, 0.6);
--vscode-keybindingLabel-bottomBorder: rgba(68, 68, 68, 0.6);
--vscode-editor-selectionBackground: rgba(64, 168, 243, 0.28);
--vscode-editor-inactiveSelectionBackground: #3a3d41;
--vscode-editor-selectionHighlightBackground: rgba(173, 214, 255, 0.15);
--vscode-editor-findMatchBackground: #515c6a;
--vscode-editor-findMatchHighlightBackground: rgba(234, 92, 0, 0.33);
--vscode-editor-findRangeHighlightBackground: rgba(58, 61, 65, 0.4);
--vscode-searchEditor-findMatchBackground: rgba(234, 92, 0, 0.22);
--vscode-editor-hoverHighlightBackground: rgba(38, 79, 120, 0.25);
--vscode-editorHoverWidget-background: #1e1e1e;
--vscode-editorHoverWidget-foreground: #cccccc;
--vscode-editorHoverWidget-border: #111518;
--vscode-editorHoverWidget-statusBarBackground: #242424;
--vscode-editorLink-activeForeground: #4e94ce;
--vscode-editorInlayHint-foreground: rgba(255, 255, 255, 0.8);
--vscode-editorInlayHint-background: rgba(55, 65, 64, 0.6);
--vscode-editorInlayHint-typeForeground: rgba(255, 255, 255, 0.8);
--vscode-editorInlayHint-typeBackground: rgba(55, 65, 64, 0.6);
--vscode-editorInlayHint-parameterForeground: rgba(255, 255, 255, 0.8);
--vscode-editorInlayHint-parameterBackground: rgba(55, 65, 64, 0.6);
--vscode-editorLightBulb-foreground: #ffcc00;
--vscode-editorLightBulbAutoFix-foreground: #75beff;
--vscode-diffEditor-insertedTextBackground: rgba(156, 204, 44, 0.2);
--vscode-diffEditor-removedTextBackground: rgba(255, 0, 0, 0.4);
--vscode-diffEditor-insertedLineBackground: rgba(155, 185, 85, 0.2);
--vscode-diffEditor-removedLineBackground: rgba(255, 0, 0, 0.2);
--vscode-diffEditor-diagonalFill: rgba(204, 204, 204, 0.2);
--vscode-list-focusBackground: #24282a;
--vscode-list-focusOutline: #66b9f4;
--vscode-list-activeSelectionBackground: #04395e;
--vscode-list-activeSelectionForeground: #ffffff;
--vscode-list-inactiveSelectionBackground: #37373d;
--vscode-list-hoverBackground: #222a2b;
--vscode-list-dropBackground: #062f4a;
--vscode-list-highlightForeground: #2aaaff;
--vscode-list-focusHighlightForeground: #2aaaff;
--vscode-list-invalidItemForeground: #b89500;
--vscode-list-errorForeground: #f88070;
--vscode-list-warningForeground: #cca700;
--vscode-listFilterWidget-background: #252526;
--vscode-listFilterWidget-outline: rgba(0, 0, 0, 0);
--vscode-listFilterWidget-noMatchesOutline: #be1100;
--vscode-listFilterWidget-shadow: rgba(0, 0, 0, 0.36);
--vscode-list-filterMatchBackground: rgba(234, 92, 0, 0.33);
--vscode-tree-indentGuidesStroke: #585858;
--vscode-tree-tableColumnsBorder: rgba(204, 204, 204, 0.13);
--vscode-tree-tableOddRowsBackground: rgba(204, 204, 204, 0.04);
--vscode-list-deemphasizedForeground: #8c8c8c;
--vscode-quickInputList-focusForeground: #ffffff;
--vscode-quickInputList-focusBackground: #04395e;
--vscode-menu-foreground: #c0c0c0;
--vscode-menu-background: #1e1e1e;
--vscode-menu-selectionForeground: #ffffff;
--vscode-menu-selectionBackground: #24282a;
--vscode-menu-separatorBackground: #606060;
--vscode-toolbar-hoverBackground: rgba(90, 93, 94, 0.31);
--vscode-toolbar-activeBackground: rgba(99, 102, 103, 0.31);
--vscode-editor-snippetTabstopHighlightBackground: rgba(124, 124, 124, 0.3);
--vscode-editor-snippetFinalTabstopHighlightBorder: #525252;
--vscode-breadcrumb-foreground: rgba(204, 204, 204, 0.8);
--vscode-breadcrumb-background: #1e1e1e;
--vscode-breadcrumb-focusForeground: #e0e0e0;
--vscode-breadcrumb-activeSelectionForeground: #e0e0e0;
--vscode-breadcrumbPicker-background: #252526;
--vscode-merge-currentHeaderBackground: rgba(64, 200, 174, 0.5);
--vscode-merge-currentContentBackground: rgba(64, 200, 174, 0.2);
--vscode-merge-incomingHeaderBackground: rgba(64, 166, 255, 0.5);
--vscode-merge-incomingContentBackground: rgba(64, 166, 255, 0.2);
--vscode-merge-commonHeaderBackground: rgba(96, 96, 96, 0.4);
--vscode-merge-commonContentBackground: rgba(96, 96, 96, 0.16);
--vscode-editorOverviewRuler-currentContentForeground: rgba(64, 200, 174, 0.5);
--vscode-editorOverviewRuler-incomingContentForeground: rgba(64, 166, 255, 0.5);
--vscode-editorOverviewRuler-commonContentForeground: rgba(96, 96, 96, 0.4);
--vscode-editorOverviewRuler-findMatchForeground: rgba(209, 134, 22, 0.49);
--vscode-editorOverviewRuler-selectionHighlightForeground: rgba(160, 160, 160, 0.8);
--vscode-minimap-findMatchHighlight: #d18616;
--vscode-minimap-selectionOccurrenceHighlight: #676767;
--vscode-minimap-selectionHighlight: #264f78;
--vscode-minimap-errorHighlight: rgba(255, 18, 18, 0.7);
--vscode-minimap-warningHighlight: #ffd399;
--vscode-minimap-foregroundOpacity: #000000;
--vscode-minimapSlider-background: rgba(55, 65, 64, 0.16);
--vscode-minimapSlider-hoverBackground: rgba(100, 100, 100, 0.35);
--vscode-minimapSlider-activeBackground: rgba(55, 65, 64, 0.5);
--vscode-problemsErrorIcon-foreground: #f14c4c;
--vscode-problemsWarningIcon-foreground: #ffd399;
--vscode-problemsInfoIcon-foreground: #3794ff;
--vscode-charts-foreground: #cccccc;
--vscode-charts-lines: rgba(204, 204, 204, 0.5);
--vscode-charts-red: #f14c4c;
--vscode-charts-blue: #3794ff;
--vscode-charts-yellow: #ffd399;
--vscode-charts-orange: #d18616;
--vscode-charts-green: #89d185;
--vscode-charts-purple: #b180d7;
--vscode-editor-lineHighlightBorder: #282828;
--vscode-editor-rangeHighlightBackground: rgba(255, 255, 255, 0.04);
--vscode-editor-symbolHighlightBackground: rgba(234, 92, 0, 0.33);
--vscode-editorCursor-foreground: #66b9f4;
--vscode-editorWhitespace-foreground: rgba(227, 228, 226, 0.16);
--vscode-editorIndentGuide-background: #404040;
--vscode-editorIndentGuide-activeBackground: #707070;
--vscode-editorLineNumber-foreground: #858585;
--vscode-editorActiveLineNumber-foreground: #c6c6c6;
--vscode-editorLineNumber-activeForeground: #c6c6c6;
--vscode-editorRuler-foreground: #5a5a5a;
--vscode-editorCodeLens-foreground: #999999;
--vscode-editorBracketMatch-background: rgba(0, 100, 0, 0.1);
--vscode-editorBracketMatch-border: #888888;
--vscode-editorOverviewRuler-border: rgba(127, 127, 127, 0.3);
--vscode-editorGutter-background: #1e1e1e;
--vscode-editorUnnecessaryCode-opacity: rgba(0, 0, 0, 0.67);
--vscode-editorGhostText-foreground: rgba(255, 255, 255, 0.34);
--vscode-editorOverviewRuler-rangeHighlightForeground: rgba(0, 122, 204, 0.6);
--vscode-editorOverviewRuler-errorForeground: rgba(255, 18, 18, 0.7);
--vscode-editorOverviewRuler-warningForeground: #ffd399;
--vscode-editorOverviewRuler-infoForeground: #3794ff;
--vscode-editorBracketHighlight-foreground1: #ffd700;
--vscode-editorBracketHighlight-foreground2: #da70d6;
--vscode-editorBracketHighlight-foreground3: #179fff;
--vscode-editorBracketHighlight-foreground4: rgba(0, 0, 0, 0);
--vscode-editorBracketHighlight-foreground5: rgba(0, 0, 0, 0);
--vscode-editorBracketHighlight-foreground6: rgba(0, 0, 0, 0);
--vscode-editorBracketHighlight-unexpectedBracket-foreground: rgba(255, 18, 18, 0.8);
--vscode-editorBracketPairGuide-background1: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background2: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background3: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background4: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background5: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background6: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground1: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground2: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground3: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground4: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground5: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground6: rgba(0, 0, 0, 0);
--vscode-editorUnicodeHighlight-border: #bd9b03;
--vscode-editorUnicodeHighlight-background: rgba(189, 155, 3, 0.15);
--vscode-editorOverviewRuler-bracketMatchForeground: #a0a0a0;
--vscode-peekViewTitle-background: rgba(55, 148, 255, 0.1);
--vscode-peekViewTitleLabel-foreground: #ffffff;
--vscode-peekViewTitleDescription-foreground: rgba(204, 204, 204, 0.7);
--vscode-peekView-border: #3794ff;
--vscode-peekViewResult-background: #252526;
--vscode-peekViewResult-lineForeground: #bbbbbb;
--vscode-peekViewResult-fileForeground: #ffffff;
--vscode-peekViewResult-selectionBackground: rgba(51, 153, 255, 0.2);
--vscode-peekViewResult-selectionForeground: #ffffff;
--vscode-peekViewEditor-background: #111518;
--vscode-peekViewEditorGutter-background: #111518;
--vscode-peekViewResult-matchHighlightBackground: rgba(234, 92, 0, 0.3);
--vscode-peekViewEditor-matchHighlightBackground: rgba(255, 143, 0, 0.6);
--vscode-editorMarkerNavigationError-background: #f14c4c;
--vscode-editorMarkerNavigationError-headerBackground: rgba(241, 76, 76, 0.1);
--vscode-editorMarkerNavigationWarning-background: #ffd399;
--vscode-editorMarkerNavigationWarning-headerBackground: rgba(255, 211, 153, 0.1);
--vscode-editorMarkerNavigationInfo-background: #3794ff;
--vscode-editorMarkerNavigationInfo-headerBackground: rgba(55, 148, 255, 0.1);
--vscode-editorMarkerNavigation-background: #1e1e1e;
--vscode-editor-foldBackground: rgba(64, 168, 243, 0.09);
--vscode-editorGutter-foldingControlForeground: #c5c5c5;
--vscode-symbolIcon-arrayForeground: #cccccc;
--vscode-symbolIcon-booleanForeground: #cccccc;
--vscode-symbolIcon-classForeground: #ee9d28;
--vscode-symbolIcon-colorForeground: #cccccc;
--vscode-symbolIcon-constantForeground: #cccccc;
--vscode-symbolIcon-constructorForeground: #b180d7;
--vscode-symbolIcon-enumeratorForeground: #ee9d28;
--vscode-symbolIcon-enumeratorMemberForeground: #75beff;
--vscode-symbolIcon-eventForeground: #ee9d28;
--vscode-symbolIcon-fieldForeground: #75beff;
--vscode-symbolIcon-fileForeground: #cccccc;
--vscode-symbolIcon-folderForeground: #cccccc;
--vscode-symbolIcon-functionForeground: #b180d7;
--vscode-symbolIcon-interfaceForeground: #75beff;
--vscode-symbolIcon-keyForeground: #cccccc;
--vscode-symbolIcon-keywordForeground: #cccccc;
--vscode-symbolIcon-methodForeground: #b180d7;
--vscode-symbolIcon-moduleForeground: #cccccc;
--vscode-symbolIcon-namespaceForeground: #cccccc;
--vscode-symbolIcon-nullForeground: #cccccc;
--vscode-symbolIcon-numberForeground: #cccccc;
--vscode-symbolIcon-objectForeground: #cccccc;
--vscode-symbolIcon-operatorForeground: #cccccc;
--vscode-symbolIcon-packageForeground: #cccccc;
--vscode-symbolIcon-propertyForeground: #cccccc;
--vscode-symbolIcon-referenceForeground: #cccccc;
--vscode-symbolIcon-snippetForeground: #cccccc;
--vscode-symbolIcon-stringForeground: #cccccc;
--vscode-symbolIcon-structForeground: #cccccc;
--vscode-symbolIcon-textForeground: #cccccc;
--vscode-symbolIcon-typeParameterForeground: #cccccc;
--vscode-symbolIcon-unitForeground: #cccccc;
--vscode-symbolIcon-variableForeground: #75beff;
--vscode-editorSuggestWidget-background: #111518;
--vscode-editorSuggestWidget-border: #111518;
--vscode-editorSuggestWidget-foreground: #d4d4d4;
--vscode-editorSuggestWidget-selectedForeground: #ffffff;
--vscode-editorSuggestWidget-selectedBackground: #24282a;
--vscode-editorSuggestWidget-highlightForeground: #2aaaff;
--vscode-editorSuggestWidget-focusHighlightForeground: #2aaaff;
--vscode-editorSuggestWidgetStatus-foreground: rgba(212, 212, 212, 0.5);
--vscode-editor-linkedEditingBackground: rgba(255, 0, 0, 0.3);
--vscode-editorHoverWidget-highlightForeground: #2aaaff;
--vscode-editor-wordHighlightBackground: rgba(87, 87, 87, 0.72);
--vscode-editor-wordHighlightStrongBackground: rgba(0, 73, 114, 0.72);
--vscode-editorOverviewRuler-wordHighlightForeground: rgba(160, 160, 160, 0.8);
--vscode-editorOverviewRuler-wordHighlightStrongForeground: rgba(192, 160, 192, 0.8); }

.mtk1 { color: #d4d4d4; }
.mtk2 { color: #1e1e1e; }
.mtk3 { color: #cc6666; }
.mtk4 { color: #9cdcfe; }
.mtk5 { color: #ce9178; }
.mtk6 { color: #b5cea8; }
.mtk7 { color: #e06c75; }
.mtk8 { color: #608b4e; }
.mtk9 { color: #5c6370; }
.mtk10 { color: #6a9955; }
.mtk11 { color: #569cd6; }
.mtk12 { color: #d19a66; }
.mtk13 { color: #d16969; }
.mtk14 { color: #56b6c2; }
.mtk15 { color: #d7ba7d; }
.mtk16 { color: #646695; }
.mtk17 { color: #abb2bf; }
.mtk18 { color: #dcdcdc; }
.mtk19 { color: #808080; }
.mtk20 { color: #4ec9b0; }
.mtk21 { color: #61afef; }
.mtk22 { color: #dcdcaa; }
.mtk23 { color: #c8c8c8; }
.mtk24 { color: #33e8ec; }
.mtk25 { color: #c586c0; }
.mtk26 { color: #e5c07b; }
.mtk27 { color: #98c379; }
.mtk28 { color: #000080; }
.mtk29 { color: #f44747; }
.mtk30 { color: #523d14; }
.mtk31 { color: #e0c285; }
.mtk32 { color: #ffffff; }
.mtk33 { color: #e05252; }
.mtk34 { color: #c678dd; }
.mtk35 { color: #cc6b73; }
.mtk36 { color: #bcc199; }
.mtk37 { color: #a79873; }
.mtk38 { color: #373b41; }
.mtk39 { color: #dd6a6f; }
.mtk40 { color: #5bb498; }
.mtk41 { color: #909090; }
.mtk42 { color: #778899; }
.mtk43 { color: #ff00ff; }
.mtk44 { color: #6796e6; }
.mtk45 { color: #be5046; }
.mtk46 { color: #b46695; }
.mtk47 { color: #828997; }
.mtk48 { color: #ff0000; }
.mtk49 { color: #4f76ac; }
.mtk50 { color: #b267e6; }
.mtk51 { color: #cd9731; }
.mtk52 { color: #3dc9b0; }
.mtk53 { color: #74b0df; }
.mtk54 { color: #4fc1ff; }
.mtk55 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }
.mtks { text-decoration: line-through; }
.mtks.mtku { text-decoration: underline line-through; text-underline-position: under; }</style><style type="text/css" media="screen">
		.monaco-editor .codelens-decoration._ee1f61 { line-height: 17px; font-size: 13px; padding-right: 7px; font-feature-settings: var(--codelens-font-features_ee1f61) }
		.monaco-editor .codelens-decoration._ee1f61 span.codicon { line-height: 17px; font-size: 13px; }
		</style></head>

    <body><div style="visibility: hidden; overflow: hidden; position: absolute; top: 0px; height: 1px; width: auto; padding: 0px; border: 0px; margin: 0px; text-align: left; text-indent: 0px; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal;"><div id="MathJax_SVG_Hidden"></div><svg><defs id="MathJax_SVG_glyphs"></defs></svg></div><div id="MathJax_Message" style="display: none;"></div>
        
            
            
<link rel="stylesheet" href="./Number of steps _ Practice Problems_files/notification_toast.13781ce68c5c.css">
<div class="notification-toast-container notification-top-center regular">
    <div class="notification-errors">
        <p id="notification-auth-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>Ensure that you are logged in and have the required permissions to access the test.
        </p>
        <p id="notification-server-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>A server error has occurred. Please refresh the page or try after some time.
        </p>
        <p id="notification-error" class="error-item hidden no-margin">
            <span class="fa fa-times less-margin-right"></span>An error has occurred. Please refresh the page or try after some time.
        </p>
        <p id="notification-custom-error" class="error-item hidden no-margin"></p>
        
    </div>
</div>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/notification-toast.d8eeab161f6f.js.download" crossorigin="anonymous" defer=""></script>

        
        
        
        <!-- Google Tag Manager (noscript) -->
        <noscript>
            <iframe src="https://www.googletagmanager.com/ns.html?id=GTM-K5QQ3LB"
            height="0" width="0" style="display:none;visibility:hidden"></iframe>
        </noscript>
        <!-- End Google Tag Manager (noscript) -->
	 
        

        <!-- Placeholder for any alert message on the site -->
        
        <div id="alert-message-holder">
            

            <!-- put a dummy message box so that it can be used when cloning
                 and adding more -->
            
        <div class="alert-message hidden">
                <div class="message float-left"></div>
                <div class="cross-holder float-left"><span class="small-cross sprites"></span></div>
                <div class="clear"></div>
            </div></div> <!-- end alert-message-holder -->

        <!-- Placeholder for any error message on the site -->
        
        <div id="error-message-holder">
            

            <!-- put a dummy message box so that it can be used when cloning
                 and adding more -->
            <div class="error-message hidden">
                <div class="message float-left"></div>
                <div class="cross-holder float-left"><span class="small-cross sprites"></span></div>
                <div class="clear"></div>
            </div>
        </div> <!-- end error-message-holder -->
        
        

        
    
        


<!-- Using Loader -->

<script src="./Number of steps _ Practice Problems_files/131c3c129d6742bca060453a8a3feeea.min.js.download" crossorigin="anonymous"></script>



<script>
  var is_user_logged_in = true;
  var ignoreErrors =  "" ;
  var defaultIngnoredErrors = ["ResizeObserver loop limit exceeded", "Event `ErrorEvent` captured as exception with message `Script error.`"]
  ignoreErrors = ignoreErrors ? [...ignoreErrors.split(","), ...defaultIngnoredErrors] : defaultIngnoredErrors;

  Sentry.onLoad(function() {
    Sentry.init({
      environment:  "production" ,
      allowUrls: [/\.hackerearth\.com/],
      tracesSampleRate:  0 ,
      sampleRate:  0.2 ,
      maxBreadcrumbs:  100 ,
      ignoreErrors: ignoreErrors,
    });

    is_user_logged_in ? Sentry.setUser({
        id: 10769788,
        email: "imroseahanaf@gmail.com",
    }) : null;
  });
</script>

    

    
    
        
        <header class="header community-header new-layout-header">
            <i class="fa fa-bars mobile-menu-btn"></i>
            <nav class="navigation">
                
                <a href="https://www.hackerearth.com/" class="logo logo-h-terminal  no-underline float-left track-header-logo"></a>
                

                
                <ul class="nav-bar no-padding float-left tablet-hide">
                    <!-- practice page -->
                    <li id="problems" class="nav-bar-menu selected"><a class="track-header-problems" href="https://www.hackerearth.com/practice/">PRACTICE</a></li>
                    <!-- challenges page -->
                    <li id="challenges" class="nav-bar-menu "><a class="track-header-challenges" href="https://www.hackerearth.com/challenges/">COMPETE</a></li>
                    <!--Jobs-->
                    <li id="jobs" class="nav-bar-menu "><a class="track-header-jobs" href="https://www.hackerearth.com/jobs/">JOBS</a></li>
                    <!--Leaderboard page-->
                    <li id="leaderboard" class="nav-bar-menu "><a class="track-header-leaderboard" href="https://www.hackerearth.com/leaderboard/contests/rated/">LEADERBOARD
                    </a></li>
                </ul>
                <ul class="nav-bar right-nav-bar no-padding float-right tablet-hide">
                    
                    
                    <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/search.e1ef7070302d.css">
                    <li id="searchbar">
                        <div id="search-icon-container" class="float-right">
                            <i class="fa fa-search"></i>
                        </div>
                        <input id="searchbar-input" class="float-left" type="text" value="" name="q" maxlength="500" autocomplete="off" spellcheck="false" placeholder="Search developers, problems, etc" ajax1="/search/AJAX/search/" ajax2="/search/search-results/">
                        <div id="search-dropdown" style="display: none;"></div>
                    </li>
                    
                    

                    
                    <li id="header-notif-icon" class="">
<a class="track-header-notifs tool-tip notification-icon tablet-hide" title="Notifications">
    <span id="notif-icon" expand="notifications-box" class="nav-bar-menu nav-menu pagelet-hover" ajax="/notifications/pagelets/new-notifications/" target="notifications-container">
        <i class="fa fa-bell"></i>
        
    </span>
</a>
<a class="track-header-notifs tool-tip notification-icon tablet-show" title="Notifications" href="https://www.hackerearth.com/notifications/">
    <span id="notif-icon-mob" class="nav-bar-menu">Notifications
</span></a>

</li>
                    

                    
                        
                        <li id="user-name" class="nav-bar-menu tablet-hide"><a class="track-header-profile-box" href="https://www.hackerearth.com/@imroseahanaf"><img src="./Number of steps _ Practice Problems_files/86624c4acg8ocigciiqemwzyzglnw1ry" alt="imroseahanaf" width="30" height="30" onerror="if(typeof handle_avatar_error==&#39;function&#39;){handle_avatar_error(this);}"></a></li>
                        
                    

                    
                    <li id="hacker-dd-icon" expand="hacker-box" class="nav-bar-menu nav-menu"><a><div class="caret-icon"><i class="fa fa-caret-down"></i></div></a></li>
                    

                    

                    <div class="clear"></div>
                </ul> <!-- nav-bar -->
                <div class="clear"></div>
                
            </nav> <!-- navigation -->

            <i class="fa fa-filter challenge-filter-btn hidden"></i>

        </header>
        
    
    
    

    

    <div id="comment-share-modal" class="modal-window small-modal">
        <div class="modal-header">
            Comment permalink
        </div>
        <div class="modal-content">
            <div class="comment-share-wrapper align-center">
                <textarea class="comment-share-text" type="textbox" rows="4" readonly="readonly" onclick="this.select();"></textarea>
            </div>
        </div>
    </div>

    
        
            



    <div id="badge-win-modal-root"><div class="badge-win-modal-wrapper"></div></div>

    <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/badges.921361c6f0b9.css">
    <link rel="stylesheet" href="./Number of steps _ Practice Problems_files/nuskha-vendors.879d4c3aef82.css">

    <script type="text/javascript" src="./Number of steps _ Practice Problems_files/vendors.5bca463a723b.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Number of steps _ Practice Problems_files/badges.7617075ec800.js.download" crossorigin="anonymous"></script>
    <script type="text/javascript" src="./Number of steps _ Practice Problems_files/nuskha-vendors.770efe34ca8a.js.download" crossorigin="anonymous"></script>

    <script>
        function loadBadgeWinModal() {
            const additionalData = {
                userId: "10769788",
                username: "imroseahanaf",
            };
            if (window.renderBadgeWinModal) {
                window.renderBadgeWinModal("badge-win-modal-root", additionalData);
            } else {
                typeof addAlert !== "undefined" && addAlert("An error has occurred. Refresh the page or try after sometime.");
            }
        }

        window.addEventListener("load", loadBadgeWinModal);
    </script>


        
    

    
    

    <!-- This is the center page which has a fixed width of 1100px -->
    
<div class="layout-container">
    <div class="gray-wide-container">
        <div id="practice-problem-app-root" class="padding-bottom-20"><div class="practice-problem-container"><div class="problem-header"><div class="breadcrumb dark small no-margin"><a class="no-underline" href="https://www.hackerearth.com/practice">All Tracks</a><span class="icon">&gt;</span><a class="no-underline" href="https://www.hackerearth.com/practice/basic-programming/">Basic Programming</a><span class="icon">&gt;</span> <a class="no-underline" href="https://www.hackerearth.com/practice/basic-programming/input-output/">Input/Output</a><span class="icon">&gt;</span> <a class="no-underline" href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/">Basics of Input/Output</a><span class="icon">&gt;</span> <span class="color-gray">Problem</span></div><div class="title-panel"><div class="title">Number of steps</div><span class="bookmark-icon" role="presentation"><div class="he-tooltip inline-block he-tooltip-bottom" aria-label="Bookmark" role="tooltip"><i class="fa fa-bookmark-o"></i></div></span></div><div class="problem-meta"><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Attempted by" role="tooltip"><div class="icon ui-user-check"></div><div class="label">126292</div></div><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Success Rate" role="tooltip"><div class="icon ui-target"></div><div class="label">87%</div></div><div class="he-tooltip inline-block item he-tooltip-bottom" aria-label="Points" role="tooltip"><div class="icon ui-task-s"></div><div class="label">30</div></div><div class="item mobile-hidden"><div class="ratings-container"><div class="ratings"><div class="react-stars-wrapper-016643696844998002" style="display: flex;"><div aria-label="add rating by typing an integer from 0 to 5 or pressing arrow keys" class="star-icon react-stars" style="overflow: hidden; position: relative;"><style>
    .react-stars-016643696844998002:before {
      position: absolute;
      overflow: hidden;
      display: block;
      z-index: 1;
      top: 0; left: 0;
      width: 50%;
      content: attr(data-forhalf);
      color: #ffd700;
  }</style><span class="" data-index="0" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="" data-index="1" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: rgb(255, 215, 0); font-size: 18px;">★</span><span class="react-stars-016643696844998002" data-index="2" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: gray; font-size: 18px;">★</span><span class="" data-index="3" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: gray; font-size: 18px;">★</span><span class="" data-index="4" data-forhalf="★" style="position: relative; overflow: hidden; cursor: default; display: block; float: left; color: gray; font-size: 18px;">★</span><p role="status" style="position: absolute; left: -200rem;">2.6</p></div></div></div><div class="votes">455 votes</div></div></div><div class="item mobile-hidden"><div class="icon ui-tag"></div><div class="label">Basic Programming,  Input/Output</div></div><div class="share-container"><div class="item share-item"><div class="icon ui-share"></div><div class="label">Share</div></div></div></div></div><div class="problem-tabs-container"><div class="problem-tabs"><div class="tab active" role="presentation">Details</div><a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/submissions/"><div class="tab" role="presentation">Submissions</div></a><a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/discussion/"><div class="tab" role="presentation">Discussion</div></a><a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/editorial/"><div class="tab" role="presentation">Editorial</div></a></div></div><div><div class="split-view"><div class="split-pane flex"><div class="pane-left"><div class="problem-details"><div class=""><div class="title">Problem</div><div class="description"><p>You are given two arrays <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-1-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mo&gt;&amp;#x2026;&lt;/mo&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="13.229ex" height="1.876ex" viewBox="0 -518.7 5695.6 807.7" role="img" focusable="false" style="vertical-align: -0.671ex;" aria-hidden="true"><defs><path stroke-width="1" id="E1-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><path stroke-width="1" id="E1-MJMAIN-31" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" id="E1-MJMAIN-2C" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path><path stroke-width="1" id="E1-MJMAIN-32" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path><path stroke-width="1" id="E1-MJMAIN-2026" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60ZM525 60Q525 84 542 102T585 120Q609 120 627 104T646 61Q646 36 629 18T586 0T543 17T525 60ZM972 60Q972 84 989 102T1032 120Q1056 120 1074 104T1093 61Q1093 36 1076 18T1033 0T990 17T972 60Z"></path><path stroke-width="1" id="E1-MJMATHI-6E" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E1-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E1-MJMAIN-31" x="748" y="-213"></use><use href="#E1-MJMAIN-2C" x="983" y="0"></use><g transform="translate(1428,0)"><use href="#E1-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E1-MJMAIN-32" x="748" y="-213"></use></g><use href="#E1-MJMAIN-2C" x="2411" y="0"></use><use href="#E1-MJMAIN-2026" x="2857" y="0"></use><use href="#E1-MJMAIN-2C" x="4196" y="0"></use><g transform="translate(4641,0)"><use href="#E1-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E1-MJMATHI-6E" x="748" y="-213"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>a</mi><mn>1</mn></msub><mo>,</mo><msub><mi>a</mi><mn>2</mn></msub><mo>,</mo><mo>…</mo><mo>,</mo><msub><mi>a</mi><mi>n</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-1">a_1, a_2, \dots, a_n</script></span> and&nbsp;<span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-2-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mo&gt;&amp;#x2026;&lt;/mo&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="12.532ex" height="2.543ex" viewBox="0 -805.7 5395.6 1094.7" role="img" focusable="false" style="vertical-align: -0.671ex;" aria-hidden="true"><defs><path stroke-width="1" id="E2-MJMATHI-62" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><path stroke-width="1" id="E2-MJMAIN-31" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" id="E2-MJMAIN-2C" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path><path stroke-width="1" id="E2-MJMAIN-32" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path><path stroke-width="1" id="E2-MJMAIN-2026" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60ZM525 60Q525 84 542 102T585 120Q609 120 627 104T646 61Q646 36 629 18T586 0T543 17T525 60ZM972 60Q972 84 989 102T1032 120Q1056 120 1074 104T1093 61Q1093 36 1076 18T1033 0T990 17T972 60Z"></path><path stroke-width="1" id="E2-MJMATHI-6E" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E2-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E2-MJMAIN-31" x="607" y="-213"></use><use href="#E2-MJMAIN-2C" x="883" y="0"></use><g transform="translate(1328,0)"><use href="#E2-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E2-MJMAIN-32" x="607" y="-213"></use></g><use href="#E2-MJMAIN-2C" x="2211" y="0"></use><use href="#E2-MJMAIN-2026" x="2657" y="0"></use><use href="#E2-MJMAIN-2C" x="3996" y="0"></use><g transform="translate(4441,0)"><use href="#E2-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E2-MJMATHI-6E" x="607" y="-213"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>b</mi><mn>1</mn></msub><mo>,</mo><msub><mi>b</mi><mn>2</mn></msub><mo>,</mo><mo>…</mo><mo>,</mo><msub><mi>b</mi><mi>n</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-2">b_1, b_2, \dots, b_n</script></span>. In each step, you can set <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-3-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="11.795ex" height="2.409ex" viewBox="0 -805.7 5078.4 1037.3" role="img" focusable="false" style="vertical-align: -0.538ex;" aria-hidden="true"><defs><path stroke-width="1" id="E3-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><path stroke-width="1" id="E3-MJMATHI-69" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><path stroke-width="1" id="E3-MJMAIN-3D" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path><path stroke-width="1" id="E3-MJMAIN-2212" d="M84 237T84 250T98 270H679Q694 262 694 250T679 230H98Q84 237 84 250Z"></path><path stroke-width="1" id="E3-MJMATHI-62" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E3-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E3-MJMATHI-69" x="748" y="-213"></use><use href="#E3-MJMAIN-3D" x="1151" y="0"></use><g transform="translate(2207,0)"><use href="#E3-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E3-MJMATHI-69" x="748" y="-213"></use></g><use href="#E3-MJMAIN-2212" x="3303" y="0"></use><g transform="translate(4304,0)"><use href="#E3-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E3-MJMATHI-69" x="607" y="-213"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>a</mi><mi>i</mi></msub><mo>=</mo><msub><mi>a</mi><mi>i</mi></msub><mo>−</mo><msub><mi>b</mi><mi>i</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-3">a_i = a_i - b_i</script></span>&nbsp;if <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-4-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;mo&gt;&amp;#x2265;&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="6.925ex" height="2.409ex" viewBox="0 -805.7 2981.7 1037.3" role="img" focusable="false" style="vertical-align: -0.538ex;" aria-hidden="true"><defs><path stroke-width="1" id="E4-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><path stroke-width="1" id="E4-MJMATHI-69" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><path stroke-width="1" id="E4-MJMAIN-2265" d="M83 616Q83 624 89 630T99 636Q107 636 253 568T543 431T687 361Q694 356 694 346T687 331Q685 329 395 192L107 56H101Q83 58 83 76Q83 77 83 79Q82 86 98 95Q117 105 248 167Q326 204 378 228L626 346L360 472Q291 505 200 548Q112 589 98 597T83 616ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path><path stroke-width="1" id="E4-MJMATHI-62" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E4-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E4-MJMATHI-69" x="748" y="-213"></use><use href="#E4-MJMAIN-2265" x="1151" y="0"></use><g transform="translate(2207,0)"><use href="#E4-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E4-MJMATHI-69" x="607" y="-213"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>a</mi><mi>i</mi></msub><mo>≥</mo><msub><mi>b</mi><mi>i</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-4">a_i \ge b_i</script></span>. Determine the minimum number of steps that are required to make all <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-5-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.476ex" viewBox="0 -518.7 529.5 635.5" role="img" focusable="false" style="vertical-align: -0.271ex;" aria-hidden="true"><defs><path stroke-width="1" id="E5-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E5-MJMATHI-61" x="0" y="0"></use></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></span></span><script type="math/tex" id="MathJax-Element-5">a</script></span>'s&nbsp;equal.</p>
<p><strong>Input format</strong></p>
<ul>
<li>First line:&nbsp;<span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-6-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.395ex" height="1.476ex" viewBox="0 -518.7 600.5 635.5" role="img" focusable="false" style="vertical-align: -0.271ex;" aria-hidden="true"><defs><path stroke-width="1" id="E6-MJMATHI-6E" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E6-MJMATHI-6E" x="0" y="0"></use></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-6">n</script></span>&nbsp;</li>
<li>Second line: <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-7-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mo&gt;&amp;#x2026;&lt;/mo&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="13.229ex" height="1.876ex" viewBox="0 -518.7 5695.6 807.7" role="img" focusable="false" style="vertical-align: -0.671ex;" aria-hidden="true"><defs><path stroke-width="1" id="E7-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><path stroke-width="1" id="E7-MJMAIN-31" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" id="E7-MJMAIN-2C" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path><path stroke-width="1" id="E7-MJMAIN-32" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path><path stroke-width="1" id="E7-MJMAIN-2026" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60ZM525 60Q525 84 542 102T585 120Q609 120 627 104T646 61Q646 36 629 18T586 0T543 17T525 60ZM972 60Q972 84 989 102T1032 120Q1056 120 1074 104T1093 61Q1093 36 1076 18T1033 0T990 17T972 60Z"></path><path stroke-width="1" id="E7-MJMATHI-6E" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E7-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E7-MJMAIN-31" x="748" y="-213"></use><use href="#E7-MJMAIN-2C" x="983" y="0"></use><g transform="translate(1428,0)"><use href="#E7-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E7-MJMAIN-32" x="748" y="-213"></use></g><use href="#E7-MJMAIN-2C" x="2411" y="0"></use><use href="#E7-MJMAIN-2026" x="2857" y="0"></use><use href="#E7-MJMAIN-2C" x="4196" y="0"></use><g transform="translate(4641,0)"><use href="#E7-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E7-MJMATHI-6E" x="748" y="-213"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>a</mi><mn>1</mn></msub><mo>,</mo><msub><mi>a</mi><mn>2</mn></msub><mo>,</mo><mo>…</mo><mo>,</mo><msub><mi>a</mi><mi>n</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-7">a_1, a_2, \dots, a_n</script></span></li>
<li>Third line: <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-8-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;mo&gt;&amp;#x2026;&lt;/mo&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/msub&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="12.532ex" height="2.543ex" viewBox="0 -805.7 5395.6 1094.7" role="img" focusable="false" style="vertical-align: -0.671ex;" aria-hidden="true"><defs><path stroke-width="1" id="E8-MJMATHI-62" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><path stroke-width="1" id="E8-MJMAIN-31" d="M213 578L200 573Q186 568 160 563T102 556H83V602H102Q149 604 189 617T245 641T273 663Q275 666 285 666Q294 666 302 660V361L303 61Q310 54 315 52T339 48T401 46H427V0H416Q395 3 257 3Q121 3 100 0H88V46H114Q136 46 152 46T177 47T193 50T201 52T207 57T213 61V578Z"></path><path stroke-width="1" id="E8-MJMAIN-2C" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path><path stroke-width="1" id="E8-MJMAIN-32" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path><path stroke-width="1" id="E8-MJMAIN-2026" d="M78 60Q78 84 95 102T138 120Q162 120 180 104T199 61Q199 36 182 18T139 0T96 17T78 60ZM525 60Q525 84 542 102T585 120Q609 120 627 104T646 61Q646 36 629 18T586 0T543 17T525 60ZM972 60Q972 84 989 102T1032 120Q1056 120 1074 104T1093 61Q1093 36 1076 18T1033 0T990 17T972 60Z"></path><path stroke-width="1" id="E8-MJMATHI-6E" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E8-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E8-MJMAIN-31" x="607" y="-213"></use><use href="#E8-MJMAIN-2C" x="883" y="0"></use><g transform="translate(1328,0)"><use href="#E8-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E8-MJMAIN-32" x="607" y="-213"></use></g><use href="#E8-MJMAIN-2C" x="2211" y="0"></use><use href="#E8-MJMAIN-2026" x="2657" y="0"></use><use href="#E8-MJMAIN-2C" x="3996" y="0"></use><g transform="translate(4441,0)"><use href="#E8-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E8-MJMATHI-6E" x="607" y="-213"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>b</mi><mn>1</mn></msub><mo>,</mo><msub><mi>b</mi><mn>2</mn></msub><mo>,</mo><mo>…</mo><mo>,</mo><msub><mi>b</mi><mi>n</mi></msub></math></span></span><script type="math/tex" id="MathJax-Element-8">b_1, b_2, \dots, b_n</script></span></li>
</ul>
<p><strong>Output format</strong></p>
<p>Print the&nbsp;minimum number of steps that are required to make all <span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-9-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.476ex" viewBox="0 -518.7 529.5 635.5" role="img" focusable="false" style="vertical-align: -0.271ex;" aria-hidden="true"><defs><path stroke-width="1" id="E9-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E9-MJMATHI-61" x="0" y="0"></use></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></span></span><script type="math/tex" id="MathJax-Element-9">a</script></span>'s equal. If it is&nbsp;not possible, then print <strong>-1</strong>.</p>
<p><strong>Constraints</strong></p>
<p><span class="mathjax-latex">&nbsp;<span class="mathjax-latex"><span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax_SVG" id="MathJax-Element-10-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;0&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;a&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;mo&gt;,&lt;/mo&gt;&lt;msub&gt;&lt;mi&gt;b&lt;/mi&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/msub&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mn&gt;5000&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="font-size: 100%; display: inline-block; position: relative;"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="19.299ex" height="2.543ex" viewBox="0 -805.7 8309.1 1094.7" role="img" focusable="false" style="vertical-align: -0.671ex;" aria-hidden="true"><defs><path stroke-width="1" id="E10-MJMAIN-30" d="M96 585Q152 666 249 666Q297 666 345 640T423 548Q460 465 460 320Q460 165 417 83Q397 41 362 16T301 -15T250 -22Q224 -22 198 -16T137 16T82 83Q39 165 39 320Q39 494 96 585ZM321 597Q291 629 250 629Q208 629 178 597Q153 571 145 525T137 333Q137 175 145 125T181 46Q209 16 250 16Q290 16 318 46Q347 76 354 130T362 333Q362 478 354 524T321 597Z"></path><path stroke-width="1" id="E10-MJMAIN-2264" d="M674 636Q682 636 688 630T694 615T687 601Q686 600 417 472L151 346L399 228Q687 92 691 87Q694 81 694 76Q694 58 676 56H670L382 192Q92 329 90 331Q83 336 83 348Q84 359 96 365Q104 369 382 500T665 634Q669 636 674 636ZM84 -118Q84 -108 99 -98H678Q694 -104 694 -118Q694 -130 679 -138H98Q84 -131 84 -118Z"></path><path stroke-width="1" id="E10-MJMATHI-6E" d="M21 287Q22 293 24 303T36 341T56 388T89 425T135 442Q171 442 195 424T225 390T231 369Q231 367 232 367L243 378Q304 442 382 442Q436 442 469 415T503 336T465 179T427 52Q427 26 444 26Q450 26 453 27Q482 32 505 65T540 145Q542 153 560 153Q580 153 580 145Q580 144 576 130Q568 101 554 73T508 17T439 -10Q392 -10 371 17T350 73Q350 92 386 193T423 345Q423 404 379 404H374Q288 404 229 303L222 291L189 157Q156 26 151 16Q138 -11 108 -11Q95 -11 87 -5T76 7T74 17Q74 30 112 180T152 343Q153 348 153 366Q153 405 129 405Q91 405 66 305Q60 285 60 284Q58 278 41 278H27Q21 284 21 287Z"></path><path stroke-width="1" id="E10-MJMAIN-2C" d="M78 35T78 60T94 103T137 121Q165 121 187 96T210 8Q210 -27 201 -60T180 -117T154 -158T130 -185T117 -194Q113 -194 104 -185T95 -172Q95 -168 106 -156T131 -126T157 -76T173 -3V9L172 8Q170 7 167 6T161 3T152 1T140 0Q113 0 96 17Z"></path><path stroke-width="1" id="E10-MJMATHI-61" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><path stroke-width="1" id="E10-MJMATHI-69" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><path stroke-width="1" id="E10-MJMATHI-62" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><path stroke-width="1" id="E10-MJMAIN-35" d="M164 157Q164 133 148 117T109 101H102Q148 22 224 22Q294 22 326 82Q345 115 345 210Q345 313 318 349Q292 382 260 382H254Q176 382 136 314Q132 307 129 306T114 304Q97 304 95 310Q93 314 93 485V614Q93 664 98 664Q100 666 102 666Q103 666 123 658T178 642T253 634Q324 634 389 662Q397 666 402 666Q410 666 410 648V635Q328 538 205 538Q174 538 149 544L139 546V374Q158 388 169 396T205 412T256 420Q337 420 393 355T449 201Q449 109 385 44T229 -22Q148 -22 99 32T50 154Q50 178 61 192T84 210T107 214Q132 214 148 197T164 157Z"></path></defs><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><use href="#E10-MJMAIN-30" x="0" y="0"></use><use href="#E10-MJMAIN-2264" x="778" y="0"></use><use href="#E10-MJMATHI-6E" x="1834" y="0"></use><use href="#E10-MJMAIN-2C" x="2435" y="0"></use><g transform="translate(2880,0)"><use href="#E10-MJMATHI-61" x="0" y="0"></use><use transform="scale(0.707)" href="#E10-MJMATHI-69" x="748" y="-213"></use></g><use href="#E10-MJMAIN-2C" x="3754" y="0"></use><g transform="translate(4199,0)"><use href="#E10-MJMATHI-62" x="0" y="0"></use><use transform="scale(0.707)" href="#E10-MJMATHI-69" x="607" y="-213"></use></g><use href="#E10-MJMAIN-2264" x="5250" y="0"></use><g transform="translate(6307,0)"><use href="#E10-MJMAIN-35"></use><use href="#E10-MJMAIN-30" x="500" y="0"></use><use href="#E10-MJMAIN-30" x="1001" y="0"></use><use href="#E10-MJMAIN-30" x="1501" y="0"></use></g></g></svg><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mo>≤</mo><mi>n</mi><mo>,</mo><msub><mi>a</mi><mi>i</mi></msub><mo>,</mo><msub><mi>b</mi><mi>i</mi></msub><mo>≤</mo><mn>5000</mn></math></span></span><script type="math/tex" id="MathJax-Element-10">0 \le n, a_i, b_i \le 5000 </script></span></span></p>
<p><strong>Sample input</strong></p>
<p>25 64 3</p>
<p><strong>Sample output</strong></p>
<p>-1</p></div></div><div class="less-margin-2 input-output-container"><div class="input-output right-border"><div class="form-label"><div class="weight-600 less-margin-right light float-left small">Sample Input</div><div class="input-output-opt float-right"><a href="https://he-s3.s3.amazonaws.com/media/hackathon/february-easy-20/problems/42b43022427e11ea.txt?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA6I2ISGOYMPJGUFGY%2F20241213%2Fap-southeast-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20241213T114856Z&amp;X-Amz-Expires=3600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=864fc9b76f6c4dec48a1c23ae88301dc3600ad6c0963410e7aed5f0286f9964d" class="track-problem-sample-input tool-tip" title="Download" rel="noopener noreferrer" target="_blank"><i class="fa fa-link"></i></a></div><div class="clear"></div></div><div class="dark"><pre class="word-spacing-0">5
5 7 10 5 15
2 2 1 3 5
</pre></div></div><div class="input-output"><div class="form-label"><div class="weight-600 float-left less-margin-right light small">Sample Output</div><div class="input-output-opt float-right"><a href="https://he-s3.s3.amazonaws.com/media/hackathon/february-easy-20/problems/42b0191a427e11ea.txt?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA6I2ISGOYMPJGUFGY%2F20241213%2Fap-southeast-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20241213T114856Z&amp;X-Amz-Expires=3600&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=f2cfe979498f820de28a3c2eb340dd2f82f0f248fc2c96bd1b45db781464c0db" class="track-problem-sample-output tool-tip" title="Download" rel="noopener noreferrer" target="_blank"><i class="fa fa-link"></i></a></div><div class="clear"></div></div><div class="dark"><pre class="word-spacing-0">8
</pre></div></div><div class="clear"></div></div><div class="less-margin-2 light small problem-solution-limits"><div class="less-margin">Time Limit: 1</div><div class="less-margin">Memory Limit: 256</div><div class="less-margin">Source Limit: </div></div><div class="explanation"><div class="title">Explanation</div><div class="description"><p>-</p></div></div><div class="contributors-panel"><div class="title">Contributers: </div><a class="user-profile" href="https://www.hackerearth.com/@amirreza"><div class="avatar"><img src="./Number of steps _ Practice Problems_files/42389b611400792-ae00-4de5-8378-b9f00aecacd1.jpg" alt="avatar"></div><div class="description name">Amirreza Poorakhavan</div></a><a class="user-profile" href="https://www.hackerearth.com/@amirreza"><div class="avatar"><img src="./Number of steps _ Practice Problems_files/42389b611400792-ae00-4de5-8378-b9f00aecacd1.jpg" alt="avtar"></div><div class="description name">Amirreza Poorakhavan</div></a></div></div></div><div class="pane-right"><div class="editor-split-pane"><div class="sub-editor new-submission-container-7e204684722f4be7a8ec6ca63d409319"><div id="code-editor-7e204684722f4be7a8ec6ca63d409319" class="code-editor"><div class="editor-header flex justify-between"><div class="editor-header-left-pane flex items-center"><span role="button" class="file-upload-text light regular">Enter your code or <a> <i classname="fa fa-upload"></i> Upload your code</a> as file.</span><div class="hidden"><input type="file" id="codeFile"></div><div class="hidden"><div class="react-modal-overlay"><div class="react-modal-container small-modal"><a class="modal-close no-underline" title="Close"></a><div class="modal-header"><h4 class="dark large less-margin">Select Language</h4></div><div class="modal-content"><div class="light regular less-margin">Just one more thing to do</div><select class=" float-left nice-select"><option value="BASH">Bash (GNU bash v5.0.17)</option><option value="C">C (gcc 10.3)</option><option value="CPP14">C++14 (g++ 10.3.0)</option><option value="CPP17">C++17 (g++ 10.3.0)</option><option value="CLOJURE">Clojure (clojure 1.10.1)</option><option value="CSHARP">C# (mcs 6.12)</option><option value="D">D (dmd 2.097.0)</option><option value="ERLANG">Erlang (erts 12.0.2)</option><option value="FSHARP">F# (fsharp 5.0)</option><option value="GO">Go (go 1.16.6)</option><option value="GROOVY">Groovy (groovy 2.4.21)</option><option value="HASKELL">Haskell (ghc 9.0.1)</option><option value="JAVA8">Java 8 (openjdk 1.8.0_241)</option><option value="JAVA14">Java 14 (oracle 14)</option><option value="JAVA17">Java 17 (openjdk 17)</option><option value="JAVASCRIPT_NODE">JavaScript (Node.js v18.15)</option><option value="JULIA">Julia (julia 1.6.2)</option><option value="KOTLIN">Kotlin (1.5.21)</option><option value="LISP_SBCL">Lisp (sbcl 2.1.6)</option><option value="LUA">Lua (lua 5.4.3)</option><option value="OBJECTIVEC">Objective-C (clang 12.0.1)</option><option value="OCAML">OCaml (ocaml 4.12.0)</option><option value="OCTAVE">Octave (gnu octave 5.2)</option><option value="PASCAL">Pascal (fpc 3.2.2)</option><option value="PERL">Perl (perl 5.30.0)</option><option value="PHP">PHP (php 7.4.3)</option><option value="PYTHON">Python (python 2.7.18)</option><option value="PYTHON3">Python 3 (python 3.10)</option><option value="PYTHON3_8">Python 3.8 (python 3.8.10)</option><option value="R">R (RScript 4.1.0)</option><option value="RACKET">Racket (racket 8.1)</option><option value="RUBY">Ruby (ruby 3.0.1)</option><option value="RUST">Rust (rustc v1.68.0)</option><option value="SCALA">Scala (scalac 2.12.14)</option><option value="SWIFT">Swift (swift 5.4.2)</option><option value="TYPESCRIPT">TypeScript (v4.9.5) (Node)</option><option value="VB">Visual Basic (mono 6.12, vbnc 0.0.0.5943)</option></select></div><div class="modal-footer"><a class="button btn-blue float-right close-modal-window edit-code">Edit</a><a class="float-right button btn-blue close-modal-window submit-code medium-margin-right">Submit</a><div class="clear"></div></div></div></div></div></div><div class="editor-header-right-pane flex items-start"><button type="button" id="editor-save-trigger-7e204684722f4be7a8ec6ca63d409319" class="editor-save-trigger regular btn-plain link ">Save</button><select id="editor-lang-select-7e204684722f4be7a8ec6ca63d409319" class="editor-lang-select nice-select"><option value="BASH">Bash (GNU bash v5.0.17)</option><option value="C">C (gcc 10.3)</option><option value="CPP14">C++14 (g++ 10.3.0)</option><option value="CPP17">C++17 (g++ 10.3.0)</option><option value="CLOJURE">Clojure (clojure 1.10.1)</option><option value="CSHARP">C# (mcs 6.12)</option><option value="D">D (dmd 2.097.0)</option><option value="ERLANG">Erlang (erts 12.0.2)</option><option value="FSHARP">F# (fsharp 5.0)</option><option value="GO">Go (go 1.16.6)</option><option value="GROOVY">Groovy (groovy 2.4.21)</option><option value="HASKELL">Haskell (ghc 9.0.1)</option><option value="JAVA8">Java 8 (openjdk 1.8.0_241)</option><option value="JAVA14">Java 14 (oracle 14)</option><option value="JAVA17">Java 17 (openjdk 17)</option><option value="JAVASCRIPT_NODE">JavaScript (Node.js v18.15)</option><option value="JULIA">Julia (julia 1.6.2)</option><option value="KOTLIN">Kotlin (1.5.21)</option><option value="LISP_SBCL">Lisp (sbcl 2.1.6)</option><option value="LUA">Lua (lua 5.4.3)</option><option value="OBJECTIVEC">Objective-C (clang 12.0.1)</option><option value="OCAML">OCaml (ocaml 4.12.0)</option><option value="OCTAVE">Octave (gnu octave 5.2)</option><option value="PASCAL">Pascal (fpc 3.2.2)</option><option value="PERL">Perl (perl 5.30.0)</option><option value="PHP">PHP (php 7.4.3)</option><option value="PYTHON">Python (python 2.7.18)</option><option value="PYTHON3">Python 3 (python 3.10)</option><option value="PYTHON3_8">Python 3.8 (python 3.8.10)</option><option value="R">R (RScript 4.1.0)</option><option value="RACKET">Racket (racket 8.1)</option><option value="RUBY">Ruby (ruby 3.0.1)</option><option value="RUST">Rust (rustc v1.68.0)</option><option value="SCALA">Scala (scalac 2.12.14)</option><option value="SWIFT">Swift (swift 5.4.2)</option><option value="TYPESCRIPT">TypeScript (v4.9.5) (Node)</option><option value="VB">Visual Basic (mono 6.12, vbnc 0.0.0.5943)</option></select><button type="button" class="go-full-screen editor-settings-button btn-plain less-margin-left margin-left-5" title="Go full screen" aria-label="Go full screen"><i class="fa fa-expand"></i></button><a id="confirm-set-favorite-code" class="show-modal hidden" target="confirm-set-favorite-code-modal"></a><div id="confirm-set-favorite-code-modal" class="modal-window small-modal"><div class="modal-header">Update default template</div><div class="modal-content"><div class="dark regular">Your existing template will be over-written. Are you sure you want to update?</div></div><div class="modal-footer"><a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/#" class="link-3 float-left close-modal-window link-near-button">Nope take me back</a><a class="float-right button btn-blue close-modal-window set-favorite-code" id="set-favorite-code">Yes</a><div class="clear"></div></div></div><div class="mobile-clear"></div><div class="editor-settings-button-container"><button class="editor-settings-button btn-plain" type="button" aria-label="Toggle Editor Settings"><i class="fa fa-cog"></i></button><div class="clear"></div></div></div></div><div class="editor-container-wrapper"><div id="editor-container-7e204684722f4be7a8ec6ca63d409319" class="editor-container" data-keybinding-context="1" data-mode-id="cpp" style="width: 100%; height: 60vh; background-color: rgb(30, 30, 30); --codelens-font-features_ee1f61: &quot;liga&quot; off, &quot;calt&quot; off;"><div class="monaco-editor no-user-select  showUnused showDeprecated vs-dark focused" role="code" data-uri="inmemory://model/1" style="width: 703px; height: 351px;"><div data-mprt="3" class="overflow-guard" style="width: 703px; height: 351px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; height: 1071px; width: 67px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 1071px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; width: 67px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; height: 1071px;"><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">18</div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">17</div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:41px;width:26px;"></div><div class="line-numbers" style="left:0px;width:41px;">16</div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">15</div></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">14</div></div><div style="position:absolute;top:240px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">13</div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:41px;width:26px;"></div><div class="line-numbers" style="left:0px;width:41px;">12</div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">11</div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">10</div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="current-line current-line-margin-both" style="width:67px; height:20px;"></div><div class="active-line-number line-numbers" style="left:0px;width:41px;">9</div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">8</div></div><div style="position:absolute;top:120px;width:100%;height:20px;"><div class="cldr alwaysShowFoldIcons codicon codicon-folding-expanded" style="left:41px;width:26px;"></div><div class="line-numbers" style="left:0px;width:41px;">7</div></div><div style="position:absolute;top:100px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">6</div></div><div style="position:absolute;top:80px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">5</div></div><div style="position:absolute;top:60px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">4</div></div><div style="position:absolute;top:20px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">2</div></div><div style="position:absolute;top:40px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">3</div></div><div style="position:absolute;top:0px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:41px;">1</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs-dark" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 67px; width: 636px; height: 351px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; left: 0px;"><div class="view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 636px;"><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div><div class="core-guide core-guide-indent vertical" style="left:36.984375px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:280px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:260px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:240px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div><div class="core-guide core-guide-indent vertical" style="left:36.984375px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:220px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:200px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:180px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:160px;width:100%;height:20px;"><div class="current-line" style="width:636px; height:20px;"></div><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:140px;width:100%;height:20px;"><div class="core-guide core-guide-indent-active vertical" style="left:0px;height:20px;width:9.24609375px"></div></div><div style="position:absolute;top:120px;width:100%;height:20px;"></div><div style="position:absolute;top:100px;width:100%;height:20px;"></div><div style="position:absolute;top:80px;width:100%;height:20px;"></div><div style="position:absolute;top:60px;width:100%;height:20px;"></div><div style="position:absolute;top:20px;width:100%;height:20px;"></div><div style="position:absolute;top:40px;width:100%;height:20px;"></div><div style="position:absolute;top:0px;width:100%;height:20px;"></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div role="presentation" aria-hidden="true" class="blockDecorations-container"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines monaco-mouse-cursor-text" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; width: 636px; height: 1071px;"><div style="top:340px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk18">}</span></span></div><div style="top:320px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk18">&gt;&gt;</span><span class="mtk1">v1</span><span class="mtk18">[</span><span class="mtk1">i</span><span class="mtk18">];</span></span></div><div style="top:300px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk18">{</span></span></div><div style="top:280px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">for</span><span class="mtk18">(</span><span class="mtk11">int</span><span class="mtk1">&nbsp;i</span><span class="mtk18">=</span><span class="mtk6">0</span><span class="mtk18">;</span><span class="mtk1">i</span><span class="mtk18">&lt;</span><span class="mtk1">n</span><span class="mtk18">;</span><span class="mtk1">i</span><span class="mtk18">++)</span></span></div><div style="top:260px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk18">}</span></span></div><div style="top:240px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cin</span><span class="mtk18">&gt;&gt;</span><span class="mtk1">v</span><span class="mtk18">[</span><span class="mtk1">i</span><span class="mtk18">];</span></span></div><div style="top:220px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk18">{</span></span></div><div style="top:200px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">for</span><span class="mtk18">(</span><span class="mtk11">int</span><span class="mtk1">&nbsp;i</span><span class="mtk18">=</span><span class="mtk6">0</span><span class="mtk18">;</span><span class="mtk1">i</span><span class="mtk18">&lt;</span><span class="mtk1">n</span><span class="mtk18">;</span><span class="mtk1">i</span><span class="mtk18">++)</span></span></div><div style="top:180px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;vector</span><span class="mtk18">&lt;</span><span class="mtk11">int</span><span class="mtk18">&gt;</span><span class="mtk1">v1</span><span class="mtk18">(</span><span class="mtk1">n</span><span class="mtk18">);</span></span></div><div style="top:160px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;vector</span><span class="mtk18">&lt;</span><span class="mtk11">int</span><span class="mtk18">&gt;</span><span class="mtk1">v</span><span class="mtk18">(</span><span class="mtk1">n</span><span class="mtk18">);</span></span></div><div style="top:140px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">int</span><span class="mtk1">&nbsp;n</span><span class="mtk18">;</span><span class="mtk1">cin</span><span class="mtk18">&gt;&gt;</span><span class="mtk1">n</span><span class="mtk18">;</span></span></div><div style="top:120px;height:20px;" class="view-line"><span><span class="mtk18">{</span></span></div><div style="top:100px;height:20px;" class="view-line"><span><span class="mtk11">int</span><span class="mtk1">&nbsp;main</span><span class="mtk18">()</span></span></div><div style="top:80px;height:20px;" class="view-line"><span><span class="mtk11">using</span><span class="mtk1">&nbsp;</span><span class="mtk11">namespace</span><span class="mtk1">&nbsp;std</span><span class="mtk18">;</span></span></div><div style="top:60px;height:20px;" class="view-line"><span><span class="mtk11">#define</span><span class="mtk1">&nbsp;ios_base::&nbsp;sync_with_stdio</span><span class="mtk18">(</span><span class="mtk11">false</span><span class="mtk18">),</span><span class="mtk1">cin</span><span class="mtk18">.</span><span class="mtk1">tie</span><span class="mtk18">(</span><span class="mtk1">NULL</span><span class="mtk18">);</span></span></div><div style="top:20px;height:20px;" class="view-line"><span><span class="mtk11">#define</span><span class="mtk1">&nbsp;ll&nbsp;</span><span class="mtk11">long</span><span class="mtk1">&nbsp;</span><span class="mtk11">long</span><span class="mtk1">&nbsp;</span><span class="mtk11">int</span></span></div><div style="top:40px;height:20px;" class="view-line"><span><span class="mtk11">#define</span><span class="mtk1">&nbsp;pb&nbsp;&nbsp;push_back</span></span></div><div style="top:0px;height:20px;" class="view-line"><span><span class="mtk11">#include&lt;</span><span class="mtk5">bits/stdc++.h</span><span class="mtk11">&gt;</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor monaco-mouse-cursor-text " style="height: 20px; top: 160px; left: 168px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; display: block; visibility: inherit; width: 2px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 622px; height: 0px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 12px; transform: translate3d(0px, 0px, 0px); contain: strict; width: 622px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="21" height="526" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; right: 0px; width: 14px; height: 351px; display: block;"></canvas><div role="presentation" aria-hidden="true" class="visible scrollbar vertical" style="position: absolute; width: 14px; height: 351px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; transform: translate3d(0px, 0px, 0px); contain: strict; height: 115px;"></div></div></div><div role="presentation" aria-hidden="true" class="" style="width: 703px;"></div><textarea data-mprt="6" class="inputarea monaco-mouse-cursor-text" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." tabindex="0" role="textbox" aria-roledescription="editor" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 15px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 20px; letter-spacing: 0px; top: 160px; left: 236px; width: 1px; height: 1px;"></textarea><div style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;" class="monaco-editor-background textAreaCover line-numbers"></div><div data-mprt="4" class="overlayWidgets" style="width: 703px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div widgetid="editor.contrib.quickInputWidget" style="position: absolute; top: 0px; right: 50%;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 0px; width: 0px; height: 351px;"><div class="minimap-shadow-hidden" style="height: 351px;"></div><canvas width="0" height="526" style="position: absolute; left: 0px; width: 0px; height: 351px;"></canvas><canvas class="minimap-decorations-layer" width="0" height="526" style="position: absolute; left: 0px; width: 0px; height: 351px;"></canvas><div class="minimap-slider" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; width: 0px;"><div class="minimap-slider-horizontal" style="position: absolute; width: 0px; height: 0px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="background-color: rgb(37, 37, 38); box-shadow: rgba(0, 0, 0, 0.36) 0px 0px 8px 2px; color: rgb(192, 192, 192); position: fixed; display: none; visibility: hidden; max-width: 1280px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 15px; background-color: rgb(17, 21, 24); border-width: 0px; border-style: none;"><div class="rename-label" style="font-size: 12px;">Enter to Rename, Shift+Enter to Preview</div></div><div class="monaco-hover hidden" tabindex="0" role="tooltip" widgetid="editor.contrib.contentHoverWidget" style="position: fixed; display: none; visibility: hidden; max-width: 1280px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-hover-content" style="overflow: hidden; font-size: 15px; line-height: 1.33333; max-height: 250px; max-width: 500px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; transform: translate3d(0px, 0px, 0px); contain: strict;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; transform: translate3d(0px, 0px, 0px); contain: strict;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow"></div></div></div></div></div></div><div id="editor-status-bar-container" class="editor-status-bar-container"><div id="editor-status-bar" class="editor-status-bar"></div><div class="statusbar-position">9:21 vscode</div></div></div></div><div class="sub-editor-footer"><div class="custom-input-container "><div class="custom-input-header"><div class="test-case-container"><button type="button" class="custom-input-icon cursor-pointer btn-plain"><div class="vertical-align-middle inline-block file-code-icon"><i class="icon ui-file-code" style="font-size: 18px;"></i></div></button><div class="custom-input-wrapper margin-left-12"><button type="button" id="custom-input-trigger-7e204684722f4be7a8ec6ca63d409319" class="provide-custom-input-trigger semi-bold no-select cursor-pointer btn-plain"><span class="margin-right-8">Test against custom input</span><div class="vertical-align-middle inline-block dropdown"><i class="icon ui-drop-down" style="font-size: 12px;"></i></div></button></div></div><div class="sub-editor-buttons-container" private-url-hash="7e204684722f4be7a8ec6ca63d409319"><button type="button" class="btn btn-outline-blue btn-large margin-right-16 compile-test-button">Compile &amp; Test code</button><div class="he-tooltip inline-block he-tooltip-bottom he-tooltip-multiline" aria-label="Code can be submitted multiple times. Only your best submission will be considered." role="tooltip"><button type="button" class="btn btn-blue btn-large">Submit code</button></div></div></div></div></div><div class="sub-editor-result"></div></div></div></div></div></div></div></div></div>
    </div>
</div>


<link rel="stylesheet" href="./Number of steps _ Practice Problems_files/practice.e7525f5ac5ae.css">
<link rel="stylesheet" href="./Number of steps _ Practice Problems_files/vendors.dd309810920d.css">


<script type="text/javascript" src="./Number of steps _ Practice Problems_files/MathJax.js.download" crossorigin="anonymous"></script>


<script type="text/x-mathjax-config;executed=true">
    var options = {
      messageStyle: "none",
      jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
      tex2jax: {
        inlineMath: [['$$','$$'], ['\\(', '\\)']],
        displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
        preview: "none"
      },
      SVG: {
        useGlobalCache: false
      }
    };

    // modify the options only in case of assessments, since for proxima-nova mathjax renders very small
    // text in chrome
    if (window.isProximaNova) {
      options = {
        messageStyle: "none",
        jax: ["input/TeX", "output/SVG", "output/HTML-CSS"],
        tex2jax: {
          inlineMath: [['$$','$$'], ['\\(', '\\)']],
          displayMath: [['$$$', '$$$'], ['\\[', '\\]']],
          preview: "none"
        },
        SVG: {
          useGlobalCache: false,
          scale: MathJax.Hub.Browser.isChrome ? 175 : 100,
          minScaleAdjust: 100
        },
        "HTML-CSS": {
          minScaleAdjust: 100
        },
        "CommonHTML": {
          minScaleAdjust: 100
        }
      }
    }

    MathJax.Hub.Config(options);
</script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/mathjax.4249b2f93e54.js.download" crossorigin="anonymous"></script>
<script type="text/javascript">
    window.addEventListener("load", function() {
      if(window.MathJax){ 
        MathJax.Hub.Queue(["Typeset", MathJax.Hub]);
      }
    });
</script>


    <!-- include modal window for login/signup -->
    


    <!-- override this block where we do not want the footer -->
    
    
        
                





<footer class="marketing-footer footer-large">
    <div class="fixed-container">
        <div class="primary-footer">
            <div class="standard-margin-bottom contact-wrapper">
                <div class="standard-margin-bottom">
                    <img src="./Number of steps _ Practice Problems_files/he-footer-logo.svg">
                </div>
                <ul class="no-style">
                    <li>+1-650-461-4192</li>
                    <li>
                        <div>For sales enquiry</div>
                        <a href="mailto:contact@hackerearth.com" target="_blank">
                            contact@hackerearth.com
                        </a>
                    </li>
                    <li>
                        <div>For support</div>
                        <a href="mailto:support@hackerearth.com" target="_blank">
                            support@hackerearth.com
                        </a>
                    </li>
                </ul>
                <ul class="social-links-container no-style">
                    <li>
                        <a href="https://www.facebook.com/HackerEarth/" target="_blank">
                            <img src="./Number of steps _ Practice Problems_files/facebook-logo.svg">
                        </a>
                    </li>
                    <li>
                        <a href="https://x.com/HackerEarth" target="_blank">
                            <img src="./Number of steps _ Practice Problems_files/x-logo.svg">
                        </a>
                    </li>
                    <li>
                        <a href="https://www.linkedin.com/company/hackerearth/?originalSubdomain=in" target="_blank">
                            <img src="./Number of steps _ Practice Problems_files/linkedin-logo.svg">
                        </a>
                    </li>
                    <li>
                        <a href="https://www.youtube.com/channel/UCYU6nvKyRYnE5kiG9JXkXpA" target="_blank">
                            <img src="./Number of steps _ Practice Problems_files/youtube-logo.svg">
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">For Developers</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/challenges/hackathon/" target="_blank">
                            Hackathons
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/challenges" target="_blank">
                            Challenges
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/jobs/" target="_blank">
                            Jobs
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/practice/" target="_blank">
                            Practice
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/campus-ambassador-program/" target="_blank">
                            Campus Ambassadors
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">For Businesses</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/community-hackathons/" target="_blank">
                            Hackathons
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/recruit/" target="_blank">
                            Assessments
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/recruit/facecode/" target="_blank">
                            FaceCode
                        </a>
                    </li>
                    <li>
                        <a href="http://www.hackerearth.com/recruit/learning-and-development/" target="_blank">
                            Learning and Development
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">Knowledge</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/practice/" target="_blank">
                            Practice
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/practice/interviews/" target="_blank">
                            Interview Prep
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/practice/codemonk/" target="_blank">
                            Codemonk
                        </a>
                    </li>
                    <li>
                        <a href="http://engineering.hackerearth.com/" target="_blank">
                            Engineering Blog
                        </a>
                    </li>
                </ul>
            </div>
            <div class="standard-margin-bottom">
                <h3 class="footer-heading">Company</h3>
                <ul class="no-style">
                    <li>
                        <a href="https://www.hackerearth.com/team/" target="_blank">
                            About us
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/companies/hackerearth/jobs/" target="_blank">
                            Careers
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/press/" target="_blank">
                            Press
                        </a>
                    </li>
                    <li>
                        <a href="https://help.hackerearth.com/" target="_blank">
                            Support
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/reach-us/" target="_blank">
                            Contact
                        </a>
                    </li>
                    <li>
                        <a href="https://www.hackerearth.com/privacy/" target="_blank">
                            Privacy Policy
                        </a>
                    </li>
                </ul>
            </div>
        </div>
    </div>
    <ul class="secondary-footer no-style">
        <li>
            
            
                © 2024 HackerEarth All rights reserved
            
        </li>
        <li>
            <a href="https://www.hackerearth.com/terms-of-service/" target="_blank">
                Terms of Service
            </a>
        </li>
        <li>
            <a href="https://www.hackerearth.com/privacy/" target="_blank">
                Privacy Policy
            </a>
        </li>
    </ul>
</footer>

        
    
    

    <div class="expand-box" id="recruiter-box" style="display: none;">
        <div class="down-arrow"></div>
        <ul class="no-margin">
            
            
            
            <a href="https://www.hackerearth.com/logout/?next=/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/"><li>Logout</li></a>
        </ul>
    </div>

    
    <div class="expand-box" id="hacker-box" style="display: none;">
        <div class="down-arrow"></div>
        <ul class="no-margin">
            
            <a class="track-header-profile-box-profile" href="https://www.hackerearth.com/@imroseahanaf">
                <li>
                    Profile (15%)
                    <div class="profile-complete-bar-head">
                        <span class="profile-complete-bar"></span>
                        <span class="profile-complete-bar-done" style="width: 15%; background-color: rgb(221, 75, 57);"></span>
                    </div>
                </li>
            </a>

            

            <a class="track-header-profile-box-bookmark" href="https://www.hackerearth.com/bookmark/problems/"><li>Bookmarks</li></a>
            <a class="track-header-profile-box-settings" href="https://www.hackerearth.com/users/profile-settings/"><li>Settings</li></a>
            <hr class="hr">

            
            <a class="track-header-profile-box-user-ratings tablet-hide" href="https://www.hackerearth.com/leaderboard/contests/rated/"><li>Ratings</li></a>
            
            <a class="track-header-profile-box-docs" href="https://www.hackerearth.com/docs/wiki/developers/"><li>Documentation</li></a>
            <a class="track-header-profile-box-docs" href="https://www.hackerearth.com/docs/wiki/developers/points-and-badges-on-hackerearth/"><li>Badges</li></a>

            <hr class="hr">

            

            

            
            

            
            <a class="track-header-profile-box-logout" href="https://www.hackerearth.com/logout/?next=/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/"><li>Logout</li></a>
        </ul>
    </div> <!-- hacker-box -->
    

    <!-- Include notifications box -->
    
    



<div class="expand-box" id="notifications-box" style="display: none;">
    <div class="down-arrow"></div>
    <div class="notifications-title-container">
        <div class="float-left weight-600">Notifications</div>
        <div class="float-right">
            <a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/#" ajax="https://www.hackerearth.com/notifications/AJAX/mark-all-read/" class="notif-mark-all-read link smaller clicky-ajax">Mark All as Read</a>
        </div>
        <div class="clear"></div>
    </div> <!-- notifications-title-container -->

    <div class="notifications-container nice-scrollbar" id="notifications-container" tabindex="0" style="overflow: hidden; outline: none;">
    </div> <!-- notifications-container -->

    <div class="smaller caps weight-600 align-center less-margin-2 less-margin-2-bottom">
        <a class="link" href="https://www.hackerearth.com/notifications/">View All Notifications</a>
    </div>
<div id="ascrail2000" class="nicescroll-rails nicescroll-rails-vr" style="width: 7px; z-index: 10; background: rgb(238, 238, 238); cursor: default; position: absolute; top: 0.666667px; left: -7px; height: 0px; opacity: 1; display: none;"><div class="nicescroll-cursors" style="position: relative; top: 0px; float: right; width: 7px; height: 0px; background-color: rgb(204, 204, 204); border: none; background-clip: padding-box; border-radius: 0px;"></div></div><div id="ascrail2000-hr" class="nicescroll-rails nicescroll-rails-hr" style="height: 7px; z-index: 10; background: rgb(238, 238, 238); top: -6.33333px; left: 0px; position: absolute; opacity: 1; cursor: default; display: none;"><div class="nicescroll-cursors" style="position: absolute; top: 0px; height: 7px; width: 0px; background-color: rgb(204, 204, 204); border: none; background-clip: padding-box; border-radius: 0px;"></div></div></div> <!-- notifications-box -->

    

    <!-- Load notification icon with unread count -->
    <div id="header-notif-icon-trigger" class="load-pagelet hidden" target="header-notif-icon" ajax="/notifications/pagelets/header-notif-icon-count/" show-loader="false"></div>

    

        
        

        <!-- Store any json returned for bigpipe -->
        <div id="bigpipe-json" class="hidden">
            
        </div>

        <!-- Store any html returned for feedback popup -->
        <div id="user-feedback-popup" class="hidden"></div>

        
            <div id="common-notification">
            </div>
        

        
        

        
        <div id="external-link-modal" class="modal-window very-large-modal">
            <div class="modal-content large dark align-left">
                <div id="external-link-content-wrapper">
                    <pre></pre>
                </div>
            </div>
        </div>
        

        <!-- All the scripts go here -->
        <script>
            
            var CURRENT_PATH = "https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/";
            var HISTORY = '';
            var DEFAULT_REAL_NUMBER_PRECISION = 2;
            var DECIMAL_PRECISION_ERROR_TEXT = "Only {decimal_limit} decimal places allowed";
            var SOMETHING_WENT_WRONG_ERROR_TEXT = "Something went wrong. Please try again later.";

            // Make code constants available globally in JS
            var MAP_LANG_TO_NAME = {"BASH": "Bash", "BEFUNGE": "Befunge", "C": "C", "CLOJURE": "Clojure", "CPP11": "C++11", "CPP": "C++", "CPP14": "C++14", "CPP17": "C++17", "CSHARP": "C#", "CSS": "CSS", "D": "D", "ERLANG": "Erlang", "FSHARP": "F#", "GO": "Go", "GROOVY": "Groovy", "HASKELL": "Haskell", "HTML": "HTML", "JAVA": "Java", "JAVA8": "Java 8", "JAVA14": "Java 14", "JAVA17": "Java 17", "JAVASCRIPT": "JavaScript(Rhino)", "JAVASCRIPT_NODE": "JavaScript(Node.js)", "JAVASCRIPT_UI": "JavaScript", "JULIA": "Julia", "LISP": "Lisp", "LISP_SBCL": "Lisp (SBCL)", "LUA": "Lua", "LOLCODE": "LOLCODE", "MSSQL": "MSSQL", "MYSQL": "MySQL", "OBJECTIVEC": "Objective-C", "OCAML": "OCaml", "OCTAVE": "Octave", "PASCAL": "Pascal", "PERL": "Perl", "PHP": "PHP", "POSTGRESQL": "PostgreSQL", "PYTHON3": "Python 3", "PYTHON3_8": "Python 3.8", "PYTHON": "Python", "R": "R(RScript)", "RACKET": "Racket", "RUBY": "Ruby", "RUST": "Rust", "SCALA": "Scala", "SCALA_2118": "Scala 2.11.8", "SWIFT_4_1": "Swift-4.1", "SWIFT": "Swift", "TEXTFILE": "Text", "Text": "Text", "TYPESCRIPT": "TypeScript", "vp": "N/A", "VB": "Visual Basic", "WHENEVER": "Whenever", "ORACLE_DB": "Oracle_Db", "KOTLIN": "Kotlin"};
            var MAP_NAME_TO_LANG = {"Bash": "BASH", "Befunge": "BEFUNGE", "C": "C", "Clojure": "CLOJURE", "C++11": "CPP11", "C++": "CPP", "C++14": "CPP14", "C++17": "CPP17", "C#": "CSHARP", "CSS": "CSS", "D": "D", "Erlang": "ERLANG", "F#": "FSHARP", "Go": "GO", "Groovy": "GROOVY", "Haskell": "HASKELL", "HTML": "HTML", "Java": "JAVA", "Java 8": "JAVA8", "Java 14": "JAVA14", "Java 17": "JAVA17", "JavaScript(Rhino)": "JAVASCRIPT", "JavaScript(Node.js)": "JAVASCRIPT_NODE", "JavaScript": "JAVASCRIPT_UI", "Julia": "JULIA", "Lisp": "LISP", "Lisp (SBCL)": "LISP_SBCL", "Lua": "LUA", "LOLCODE": "LOLCODE", "MSSQL": "MSSQL", "MySQL": "MYSQL", "Objective-C": "OBJECTIVEC", "OCaml": "OCAML", "Octave": "OCTAVE", "Pascal": "PASCAL", "Perl": "PERL", "PHP": "PHP", "PostgreSQL": "POSTGRESQL", "Python 3": "PYTHON3", "Python 3.8": "PYTHON3_8", "Python": "PYTHON", "R(RScript)": "R", "Racket": "RACKET", "Ruby": "RUBY", "Rust": "RUST", "Scala": "SCALA", "Scala 2.11.8": "SCALA_2118", "Swift-4.1": "SWIFT_4_1", "Swift": "SWIFT", "Text": "Text", "TypeScript": "TYPESCRIPT", "N/A": "vp", "Visual Basic": "VB", "Whenever": "WHENEVER", "Oracle_Db": "ORACLE_DB", "Kotlin": "KOTLIN"};
        </script>

        







<script type="text/javascript">
    var CodeEditorText = {
        fullScreen: "Full Screen",
        minimise: "Minimise",
        submit : "Submit code",
        submitTooltip : "Code can be submitted multiple times. Only your best submission will be considered.",
        compileSubmit : "Compile & Test code",
        compileSubmitForSQL : "Execute & Test",
        provideCustomInput : "Test against custom input",
        copyCustomInput: "Click to copy input to test against custom input",
        customInputPopulated : "Custom input populated",
        resetCustomInput : "Reset custom input",
        clearCustomInput : "Clear custom input",
        disabledCustomInputTooltip: "This test case is very large and you cannot edit it further. Reset the custom input to enable editing again.",
        largeCustomInput: "Large custom input are not editable",
        customInputPopulating : "Custom input getting populated",
        keybindingNormal : "Normal",
        keybindingVim : "Vim",
        keybindingEmacs : "Emacs",
        intellisense: "Auto-complete",
        writeOrUploadCode : "Enter your code or <a> <i className='fa fa-upload'></i> Upload your code</a> as file.",
        overWriteExistingTemplate : "Your existing template will be over-written. Are you sure you want to update?",
        updateDefaultTemplate : "Update default template",
        takeMeBack: "Nope take me back",
        yes: "Yes",
        selectLanguage: "Language",
        save : "Save",
        loading: "Loading",
        autoCompleteInfo: "Press Ctrl-space for autocomplete suggestions.",
        autoCompleteServerInfo: "Press Ctrl-space for autocomplete suggestions (accuracy dependent on connection stability).",
        goFullScreen: "Go full screen",
        exitFullScreen: "Exit full screen",
        goFullScreenTooltip: "Fullscreen mode for split view",
        verticalView: "Vertical view",
        splitView: "Split view",
        changeToVerticalView: "Change to vertical view",
        changeToSplitView: "Change to split view",
        lightTheme: "Light",
        darkTheme: "Dark",
        unsavedCodeWarning: "You may loose all the unsaved changes!",
        savedText: "Saved",
        savingText: "Saving",
        errorInSavingText: "Error in saving",
        saveText: "Save",
        setFavoriteLangText: "Set {0} as favorite",
        setDefaultTemplateText: "Set as default template",
        selectLanguageText: "Select Language",
        themeHeader: "Theme",
        YOUR_SUBMISSION_HAS_BEEN_SAVED_SUBMISSION_ID: "Your submission has been saved. Submission ID:",
        SUBMISSION_RESULT_WONT_BE_SHOWN:  "<strong>Note:</strong> Submission result won't be shown." ,
        helpText: "Just one more thing to do",
        editorModeHeader: "Editor Mode",
        editorFontHeader: "Font",
        editorTabSpaceHeader: "Tab Space",
        editText: "Edit",
        submitText: "Submit",
        playText: "Play",
        defaultBot: "Default Bot",
        fetchFailure: "A server error has occurred. You can continue writing code or attempt any other question and try again after a while.",
        fetchTimedout: "We have received your submission and it is being evaluated.",
        multiEditModeIndicator: "Multiline editing is enabled. Press esc to turn it off.",
        favLangMsg: "has been set as your preferred language.",
        defaultCodeMsg: "code template has been updated.",
        visibility: "Visibility",
        notAvailableText: "-",
        visibleTestCase: "Visible test case",
        hiddenTestCase: "Hidden test case",
        errorHeader: "Error",
        errorContent: "There was an error while loading the editor. Click Reload to refresh the editor.",
        reload: "Reload",
        reloadEditor: "Reload editor",
        reconnectText: "Reconnect",
        resetCodeStub: "Reset to default code",
        resetCodeStubDisable: "No default code stub available",
        resetCodeStubModelHeader: "Are you sure you want to reset the code stubs to the default code?",
        resetCodeStubModelContent: "After you reset the code, all your progress will be lost.",
        resetCodeStubBtn: "Reset code stubs",
        cancelBtn: "Cancel",
        RUN_AND_SAVE: "Run and save",
        TEST_SAMPLE_INPUTS: "View test cases",
        COPY_TO_CUSTOM: "Copy to custom",
        COMPILE_TEST_CODE: "Test code",
        CLEAR: "Clear",
        TEST_CODE: "Test code",
        RESET_SAMPLE: "Reset to sample input",
        lspConnectionText: {
            SETTING_UP: "Setting up auto-complete...",
            OPEN: "Auto-complete ready!",
            CLOSED: "Auto-complete connection failed.",
        },
        tableHeaders: {
            TEST_CASES: "Test cases",
            TIME: "Time",
            MEMORY: "Memory",
            SCORE: "Score",
            RESULT: "Result",
        },
        submitResponseText: {
            header: {
                RESULT: "RESULT",
                EVALUATING_SOLUTION: "Evaluating solution...",
                SUBMISSION_ID : "Submission ID",
                REFER_JUDGE_ENVIRONMENT : "Refer judge environment",
                VIEW_MORE_TEXT : "View more",
                TOTAL_SCORE: "Total score",
                HIGHEST_SCORE: "Your highest scored submission will be selected as the best",
                USE: "Use the",
                CUSTOM: "Custom",
                RUN_AND_SAVE: "Run and save",
                OR: "or",
                TEST_CASES: "Test cases",
                RESET_TO_SAMPLE: "tab to test the code against custom input.",
                EXECUTE_TEST_CASES: "to execute the code against all available test cases. Alternatively, you can use the",
                NO_SUBMISSIONS: "tabs to execute the test cases against your code to see the results.",
                NO_VISIBLE_TESTCASES: "There are no visible test cases for this question. Use",
                CUSTOM_INPUT_LABEL: "You can enter your own input here and test your code against it.",
                TOO_LARGE_INPUT: "The input is too large to display",
                ENTER_CUSTOM_INPUT: "Enter custom input here",
                VISIBLE_TEST_CASES: "Visible test cases",
                CUSTOM_INPUT: "Custom input",
            },
            table: {
                inputCol: {
                    DISPLAY_NAME: "Input",
                },
                outputCol: {
                    DISPLAY_NAME: "Output",
                },
                yourOutput: {
                    HEADING_TOOLTIP: "Your output for given input",
                },
                correctOutput: {
                    HEADING_TOOLTIP: "Correct output for given input",
                },
                log: {
                    HEADING_TOOLTIP: "Standard error stream for given input",
                    ERROR_TOOLTIP: "Error log for given testcase",
                },
                diff: {
                    HEADING_TOOLTIP: "Diff between your output and correct output",
                },
                details: {
                    VIEW_DETAILS: "View details",
                },
            },
            details: {
                BACK_TO_ALL_RESULTS: "Back to all results",
                TEST_CASE: "Test case",
                EXECUTION_LOG: "Execution log",
                SOMETHING_WENT_WRONG_ERROR_TEXT: "Something went wrong. Please try again later.",
                INVISIBLE_TESTCASES: "Input and outputs are not available for invisible test cases",
            },
            footer: {
                COMPILATION_LOG: "Compilation error",
            },
            common: {
                SCORE: "Score",
                TIME: "Time (sec)",
                MEMORY: "Memory (KiB)",
                LANGUAGE: "Language",
                INPUT: "Input",
                OUTPUT: "Output",
                EXPECTED_CORRECT_OUTPUT: "Expected output",
                RESULT: "Result",
                YOUR_OUTPUT: "Your output",
                CORRECT_OUTPUT: "Correct output",
                AUTO_SAVED: "Autosaved",
                LOG: "Log",
                DIFF: "Diff",
                AC_TITLE: "Solution accepted",
                PAC_TITLE: "Partially solved",
                SECONDS: "seconds",
                SEC_S: "sec(s)",
                KIB: "KiB",
            },
            resultMapping: {
                RE: "Runtime error",
                CE: "Compilation error",
                TLE: "Time limit exceeded",
                OLE: "Output limit exceeded",
                MLE: "Memory limit exceeded",
                WA: "Wrong answer",
                AC: "Accepted",
                PAC: "Partially accepted",
                IFME: "Input File Missing",
            },
            typeDescriptionMapping: {
                SIGSEGV: 
                    '<span class="bold">Segmentation fault:</span> This error has occurred because your program is trying to read or write outside the allocated memory or your program is trying to write a read-only memory. For example, this error is thrown when you are accessing a[-1] in a programming language that does not support negative indices for an array.<div>The SIGSEGV error can also occur when an out-of-scope array index causes a buffer overflow or an incorrectly-initialized pointer.</div>'
                ,
                SIGXFSZ: 
                    '<span class="bold">Output limit exceeded:</span> This error has occurred because your program is printing an excessive amount of data.'
                ,
                SIGFPE: 
                    '<span class="bold">Floating point error:</span> This error has occurred because you are dividing a number by 0 or trying to take the square root of a negative number.'
                ,
                SIGABRT: 
                    '<span class="bold">Signal abort error:</span> This error has occurred because the compiler aborted your program in while executing the same. It can also occur because of allocation of insufficient memory.'
                ,
                NZEC: 
                    '<span class="bold">Non-zero exit code:</span> This error has occurred because the program has exited after returning a different value from 0 to the shell.<div>In C or C++, the error represents (but not limited to) that you forgot to add <span class="bold">return 0</span> at the end of your program, your program throws an exception that has not been caught, or the program has allocated a large amount of memory in vector.</div><div>For languages such as Python, this error represents that your program has crashed or raised an uncaught exception.</div>'
                ,
                MLE: 
                    '<span class="bold">Memory limit exceeded:</span> This error has occurred because your program is trying to allocate some memory beyond the allowed limit. It can also occur if the program has a very large array or if a data structure in your program is too large.'
                ,
            }
        },
        backend: {
            CAN_SHOW_VISIBLE_TEST_CASES: false,
        },
        warningMessageAndFailure: {
            WARNING_MESSAGE: "Evaluating your code. Sorry it's taking longer than usual.",
            modal: {
                COMPILATION_HEADING: "Compilation failed",
                SUBMISSION_HEADING: "Submission failed",
                FAILURE_MESSAGE: "Code evaluation failed. This could be due to an internal error. Try again.",
                PRIMARY_BUTTON: "Retry",
                SECONDARY_BUTTON: "Cancel",
            }
        },
    };

    var CodeEditorConstants= {
        CAN_SHOW_SCORE_FOR_SUBMISSION: false,
    }

</script>



<script type="text/javascript">
    // Following global variables are used to carry translated strings from HTML pages to 'bluebook' React templates
    var QUESTION_TEXT = "Question";
    var LOAD_QUESTION_TEXT = "Load Question";
    var FLOW_HELP_TEXT = "See how to attempt this question.";
    var MAX_MARKS_TEXT = "Max. score";
    var LOADING_ERR_MSG_TEXT = "Oops! There seems to be some issue. Please refresh the page.";
    var LOAD_CODE_EDITOR_TEXT = "Load Code Editor";
    var LOADING_TEXT = "Loading Code Editor...";
    var CODE_SUBMIT_HELP_TEXT = "You can submit code after loading editor";
    var NEW_SUBMISSION_TEXT = "New Submission";
    var ALL_SUBMISSIONS_TEXT = "All Submissions";
    var REFRESHING_TEXT = "Refreshing...";
    var REFRESH_ALL_SUBMISSIONS_TEXT = "Refresh All Submissions List";
    var EXPLAINATION_TEXT = "Explanation";
    var SAMPLE_INPUT_TEXT = "Sample Input";
    var SAMPLE_OUTPUT_TEXT = "Sample Output";
    var PLAINTEXT_LINK_TEXT = "Plaintext Link";
    var TIME_LIMIT_TEXT = "Time Limit";
    var MEMORY_LIMIT_TEXT = "Memory Limit";
    var SOURCE_LIMIT_TEXT = "Source Limit";
    var FILE_SIZE_LIMIT_TEXT = "File size limit is {fileSizeLimit} MB";
    var MARKING_SCHEME_TEXT = "Marking Scheme";
    var ALLOWED_LANGUAGES_TEXT = "Allowed Languages";
    var SUBMITTING_TEXT = "Submitting..";
    var ATTEMPTED_TEXT = "Attempted";
    var SUBMIT_TEXT = "Submit";
    var ALERT_TEXT_1 = "Please attach a file to your answer";
    var UPLOAD_FILE_TEXT = "Upload File";
    var UPLOAD_PREDICTION_FILE_TEXT = "Upload File";
    var UPLOAD_SOURCE_CODE_TEXT = "Upload Source Code";
    var UPLOAD_APK_TEXT = "Upload Android Application (.apk)";
    var ALERT_TEXT_2 = "Your time for this question is over. You cannot change your answer now.";
    var NOT_ATTEMPTED_TEXT = "Not Attempted";
    var ALERT_TEXT_3 = "Answer was reset successfully!";
    var ALERT_TEXT_4 = "You cannot reset the answer now!";
    var ALERT_TEXT_5 = "Your time for this question is over. You cannot reset your answer now.";
    var ALERT_TEXT_6 = "Your time for this question is over. You cannot change your answer now.";
    var RESET_ANSWER_TEXT = "Reset Answer";
    var ANSWER_SAVED_TEXT = "Answer Saved";
    var ANSWER_UNSAVED_TEXT = "Do not forget to submit your answer.";
    var NEXT_QUESTION_TEXT = "Next Question";
    var WRITE_ANSWER_TEXT = "Write your answer here";
    var WARNING_TEXT = "Select at least one option.";
    var CHANGE_FILE_TEXT = "Change File";
    var DISABLE_ERROR_MESSAGE = "Please upload APK file first!";
    var YOUR_ANSWER_TEXT = "Your Answer";
    var ADDITIONAL_COMMENTS = "Additional Comments";
    var YOUR_SOLUTION = "Your Solution";
    var PREVIEW_TEXT = "Preview";
    var WEBCAM_NOT_ACCESSIBLE_MESSAGE = "Could not access webcam. Enable webcam or use latest version of chrome/firefox browser.";
    var TIME_COMPLETED_MESSAGE = "The time has completed!";
    var LEAVE_CONFIRM_MESSAGE_1 = "Are you sure you want to leave?";
    var WEBCAM_ACCESS_INFO_1 = "This test requires webcam access. Give webcam permission.";
    var WEBCAM_ACCESS_INFO_2 = "You can not take test without giving access to webcam.";
    var TIME_UP_MESSAGE = "Time Up!";
    var TIME_OVER_MESSAGE_1 = "Your time for this question is over. You cannot change your answer now.";
    var PLEASE_WAIT_MESSAGE_1 = "Please wait, your answer is being submitted.";
    var ATTEMPTED_MESSAGE = "Attempted";
    var NOTE_TEXT = "Note";
    var NOT_ATTEMPTED_MESSAGE = "Not Attempted";
    var PROCTOR_ALERT_1 = "You are a superuser. I will let you cheat.";
    var PROCTOR_ALERT_2 = "You will be logged out if you leave this page!";
    var SAMPLE_IO_NOTE = "Your code should be able to convert the sample input into the sample output. However, this is not enough to pass the challenge, because the code will be run on multiple test cases. Therefore, your code must solve this problem statement.";
    var PREDICTION_ERROR_TEXT = "Please upload your prediction file";
    var FILE_SIZE_ERROR_TEXT = "Please upload a file with size less than {fileSizeLimit} MB";
    var SOURCE_CODE_ERROR_TEXT = "Please upload your source code file";
    var CodeEditorConstants= {
        CAN_SHOW_SCORE_FOR_SUBMISSION: false,
    }
</script>

<script type="text/javascript" charset="utf-8">
    var DOWNLOAD_DATASET_TEXT = "Download dataset";
    window.PRACTICE_PAGE = {
        CONSTANT: {
            USER_ID: '10769788',
            isAuthenticated: true,
            STATIC_URL: 'https://cdn.hackerearth.com/static/',
            RENDER_ISSUE_ALERT: "An error has occurred. Please refresh the page or try after sometime.", 
            DETAILS: "Details",
            SUBMISSIONS: "Submissions",
            DISCUSSIONS: "Discussion",
            SIMILAR_PROBLEMS: "Similar Problems",
            EDITORIAL: "Editorial",
            AUTHOR_SOLUTION: "Author's Solution",
            TESTER_SOLUTION: "Tester's Solution",
            ALL_TRACKS: "All Tracks",
            PROBLEM: "Problem",
            SHARE: "Share",
            PREDICTION_FILE_TITLE: "Upload prediction file",
            PREDICTION_FILE_DESC: "Please upload the prediction file in the format as stated in the problem.",
            ADD_FILES:  '<span class="highlight">Add files</span> or drop files here' ,
            UPLOADED_AND_SUBMIT: "Your file has been uploaded successfully and submit now.",
            SUBMIT_AND_EVALUATE: "Submit & Evaluate",
            SUCCESS_MESSAGE: "Your submission has been received. Check your submissions tab for more",
            ERROR_MESSAGE: "Something went wrong, try again.",
            SRC_FILE_TITLE: "Upload Source Files",
            SRC_FILE_DESC: "You need to submit a zip or tar archive consisting of a text file explaining your approach, details about feature engineering, tools you used and the relevant source files.",
            UPLOAD: "Upload",
            EXPLANATION: "Explanation",
            CONTRIBUTORS: "Contributers",
            VOTES: "votes",
            AVG_RATING: "Average Rating",
            YOU_RATED: "You Rated",
            RATE_HERE: "Rate Here",
            ATTEMPTED_BY: "Attempted by",
            SUCCESS_RATE: "Success Rate",
            POINTS: "Points",
            TAGS: "Tags",
            MY_SUBMISSION: "My Submissions",
            BEST_SUBMISSION: "Best Submissions",
            TD_RESULT: "Result",
            TD_RESULT_DETAILS: "Result Details",
            TD_TIME: "Time (Sec)",
            TD_MEMORY: "Memory (kb)",
            TD_LANG: "Language",
            TD_DETAIL: "Detail",
            TD_DATE: "Date",
            NO_SUBMISSION: "No code submissions done yet",
            SUBMISSION: "Submission",
            NO_BEST_SOLUTION: "There is no solution for this language",
            EDITORIAL_LOCK_INFO: "The Editorial is locked. In order to qualify for points, you need to solve the problem without unlocking the editorial.",
            EDITORIAL_LOCK_MSG: "Are you sure you want to unlock the tab?",
            EDITORIAL_UNLOCK_TEXT: "Unlock it"
        }
    }
</script>

<script type="text/javascript" src="./Number of steps _ Practice Problems_files/vendors.09b7eec6c588.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/practice.14973130a8c8.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/util.350eec762462.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/controller.590595221715.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/code_player.1487cb2419f4.js.download" crossorigin="anonymous"></script>



        <!-- alljs: static_media/js/jquery-1.7.min.patched.js static_media/js/jquery.color.js static_media/js/jquery.elastic.js static_media/js/ajaxSend.js  static_media/js/jquery.inview.js  static_media/js/tooltip/jquery.tipTip.modified.js  static_media/offline/offline.min.js  static_media/js/watermark.min.js  static_media/history.js?v=0.1/scripts/bundled/html4html5/jquery.history.js  static_media/js/jquery.nicescroll.js  static_media/simplemodal/simplemodal.js static_media/js/jquery.sticky.js static_media/js/pusher.min.js static_media/js/ifvisible.min.js static_media/feeds/feeds.js static_media/base/progress_bar.js -->
        





<script>
    UPLOADING_TEXT = "Uploading";
    UPLOADED_TEXT = "Uploaded";
    SAVING_TEXT = "Saving..";
    UPLOAD_SUCCESS_MESSAGE = "File saved successfully.";
    UPLOAD_ERROR_MESSAGE = "An error occured while saving, please try again in sometime.";
</script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/alljs.4b9c2cf26ef1.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/base1.0.1.2a146214f85d.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/bigpipe.65dadf156b10.js.download" crossorigin="anonymous"></script>
        


<script type="text/javascript">
var CONFIRM_COMMENT_DELETE = "Are you sure, you want to delete comment?";
var COMMENT_NOT_DELETED = "Comment could not be deleted!";
var CONFORM_COMMENT_MARK_SPAM = "Are you sure, you want to mark this comment as spam?";
var COMMENT_NOT_MARKED_SPAM = "Comment could not be marked as spam!";
var ENTER_15_CHARS = "Enter at least 15 characters";
var JUST_X_MORE = "Just {count} more to go";
</script>
        <script>
            var MAP_MARKER_SIGNUP_IMAGE = 'https://cdn.hackerearth.com/static/metrics/map-marker.png';
            var MAP_MARKER_LOGIN_IMAGE = 'https://cdn.hackerearth.com/static/metrics/map-marker-login.png';
            var AJAX_URL = '';

            // Used in search
            var is_user_logged_in = true;
        </script>
        
        
<script>
    // firestore credentials
    var firebaseConfig = {
        apiKey:'AIzaSyD7oH2r4iyvysFx47-IVwrzdwIuw7Ici90',
        authDomain:'he-production.firebaseapp.com',
        databaseURL:'https://he-production.firebaseio.com',
        projectId:'he-production',
        storageBucket:'he-production.appspot.com',
        messagingSenderId:'100736274227',
        appId:'1:100736274227:web:fdd60d6929555af4d3b846'
    };
    window.firebaseConfig = firebaseConfig;
</script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/firebase-app.a75f50850a09.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/firebase-firestore.ac7f12977426.js.download" crossorigin="anonymous"></script>
<script type="text/javascript" src="./Number of steps _ Practice Problems_files/firestore_realtime.4bfd998e5357.js.download" crossorigin="anonymous"></script>

        
        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/history.9f9bce34e5c7.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/commentUtils.dadb11872038.js.download" crossorigin="anonymous"></script>


        




<script type="text/javascript" charset="utf-8">
    window.DISCUSSION_FORUM = {
        CONFIG: JSON.parse("{\"avatarUrl\": \"https://uc.hackerearth.com/he-s3/media/avatars/imroseahanaf/resized/120/86624c4acg8ocigciiqemwzyzglnw1ry\", \"displayName\": \"Imrose Ahanaf\", \"isAuthenticated\": true, \"profileId\": 10769788, \"profileUrl\": \"/@imroseahanaf\", \"canPin\": false, \"identifier\": \"MTgzOjEyNDY5NDU=\", \"parentTitle\": \"Number of steps\", \"parentUrl\": \"/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/\", \"showBreadcrumb\": false, \"showBackbutton\": true}"),
        CONSTANT: {
           BACK_STR : "Back",
           EDIT_STR: "Edit",
           DELETE_STR: "Delete",
           EDIT_TITLE: "Edit this topic",
           DELETE_TITLE: "Delete this topic",
           CANCEL_STR: "Cancel",
           UPDATE_TOPIC: "Update topic",
           PUBLISH_TOPIC: "Publish topic",
           ADD_REPLY_STR: "Reply",
           LOGIN_TO_LIKE: "Login to like",
           LIKE_TOPIC: "Like this topic",
           UNLIKE_TOPIC: "Unlike this topic",
           LIKE_COMMENT: "Like this comment",
           UNLIKE_COMMENT: "Unlike this comment",
           DELETE_COMMENT: "Delete",
           DELETE_COMMENT_TITLE: "Delete this comment?",
           DELETE_COMMENT_MESSAGE: "All the replies within this comment will also get deleted",
           PIN: "Pin",
           UNPIN: "Unpin",
           PIN_STR: "Pin this topic to the discussion board",
           UNPIN_STR: "Unpin this topic from the discussion board",
           PINNED: "Pinned",
           TOPIC_UPDATE_ALERT: "The topic has been updated",
           TOPIC_DUPLICATE_ALERT: "The topic has been posted to the discussion forum",
           PINNED_ALERT: "Topic has been pinned",
           UNPINNED_ALERT: "Topic has been unpinned",
           PIN_ERROR: "There was some error while trying to pin topic",
           TOPIC_DELETE_ALERT: "Some error occured while trying to delete this topic. Please contact support if problem persists.",
           TOPIC_DELETE_SUCCESS: "The topic has been deleted",
           TOPIC_404: "Topic not found. The URL might be incorrect or the topic has been deleted",
           PAGE_REFRESH: "Some error occured while loading this page. Please try refreshing this page once",
           RATELIMIT_REACHED: "You have exceeded the allowable access rate for this page. Please try again after some time.",
           CREATE_NEW_TOPIC: "Create new Topic",
           THATS_ALL_FOLKS: "That's all folks!",
           UNACCEPTABLE_CONTENT: "This content is not acceptable.",
        }
    }
</script>


<script type="text/javascript">
    var initial_state = {
        pType: "algorithm",
        slug: "make-all-equal-90a21ab2",
        title: "Number of steps",
        topicTree: {"track": {"url": "/practice/basic-programming/", "title": "Basic Programming"}, "topic": {"url": "/practice/basic-programming/input-output/", "title": "Input/Output"}, "sub_topic": {"url": "/practice/basic-programming/input-output/basics-of-input-output/", "title": "Basics of Input/Output"}},
        problemData: {"id": 1246945, "title": "Number of steps", "description": "<p>You are given two arrays <span class=\"mathjax-latex\">\\(a_1, a_2, \\dots, a_n\\)</span> and\u00a0<span class=\"mathjax-latex\">\\(b_1, b_2, \\dots, b_n\\)</span>. In each step, you can set <span class=\"mathjax-latex\">\\(a_i = a_i - b_i\\)</span>\u00a0if <span class=\"mathjax-latex\">\\(a_i \\ge b_i\\)</span>. Determine the minimum number of steps that are required to make all <span class=\"mathjax-latex\">\\(a\\)</span>&#x27;s\u00a0equal.</p>\n<p><strong>Input format</strong></p>\n<ul>\n<li>First line:\u00a0<span class=\"mathjax-latex\">\\(n\\)</span>\u00a0</li>\n<li>Second line: <span class=\"mathjax-latex\">\\(a_1, a_2, \\dots, a_n\\)</span></li>\n<li>Third line: <span class=\"mathjax-latex\">\\(b_1, b_2, \\dots, b_n\\)</span></li>\n</ul>\n<p><strong>Output format</strong></p>\n<p>Print the\u00a0minimum number of steps that are required to make all <span class=\"mathjax-latex\">\\(a\\)</span>&#x27;s equal. If it is\u00a0not possible, then print <strong>-1</strong>.</p>\n<p><strong>Constraints</strong></p>\n<p><span class=\"mathjax-latex\">\u00a0<span class=\"mathjax-latex\">\\(0\u00a0\\le n, a_i, b_i \\le 5000 \\)</span></span></p>\n<p><strong>Sample input</strong></p>\n<p>25 64 3</p>\n<p><strong>Sample output</strong></p>\n<p>-1</p>", "sample_explanation": "<p>-</p>", "tags": "Basic Programming, Input/Output", "level": "E-M", "private_url_hash": "7e204684722f4be7a8ec6ca63d409319", "ratings": {"score": 2.6, "votes": 455}, "success_rate": 87, "points": 30, "attempted_by": 126292, "bookmarked": false, "time_limit": 1.0, "memory_limit": 256, "max_code_size": 1024, "editorial": {"state": "unlocked"}},
        activeTab: "description",
        baseURL: "/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/",
        isSourceList: false,
        shareURL: "https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/"
    }
    
    function loadPracticePage() {
        if (window.renderPracticePage) {
            window.renderPracticePage("practice-problem-app-root", initial_state);
        } else {
            typeof addAlert !== "undefined" && addAlert(PRACTICE_PAGE.CONSTANT.RENDER_ISSUE_ALERT);
        }
    }

    function loadPracticeLitePage() {
        if (window.renderPracticeLitePage) {
            window.renderPracticeLitePage("practice-problem-app-root", initial_state);
        } else {
            typeof addAlert !== "undefined" && addAlert("Failed");
        }
    }

    const isAuthenticated = true
    try {
        if(isAuthenticated) {
            window.loadPracticePage();
        } else {
            window.loadPracticeLitePage();
        }
    } catch (e) {
        if(isAuthenticated) {
            window.addEventListener("load", loadPracticePage);
        } else{
            window.addEventListener("load", loadPracticeLitePage);
        }
    }
</script>


        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/offline.min.98d243bc54c2.js.download" crossorigin="anonymous"></script>

        <script>
            if (window.Offline) {
                Offline.options = {
                    interceptRequests: false,
                    requests: false,
                };
            }
        </script>

        

        

<script>
    var profile_completeness_percentage = 15;
</script>


<script>
    // Used in search
    var is_user_logged_in = true;
</script>

<script>

$(document).ready(function (){
    $('#header-notif-icon-trigger').click();

    

});
</script>

<script type="text/javascript" src="./Number of steps _ Practice Problems_files/search.1.0.f3e89277dbfc.js.download" crossorigin="anonymous" defer=""></script>




        
        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/detect_timezone.12f6ba68823f.js.download" crossorigin="anonymous"></script>
        <script type="text/javascript" src="./Number of steps _ Practice Problems_files/mapped_tz.b92bd2377713.js.download" crossorigin="anonymous"></script>
        <script>

            function setTimezoneCookie(detected_user_tz) {
                /* Sets the detected user timezone as a cookie in the browser.
                   If someone changes it or removes it, a sanity check is
                   performed and the cookie is reset.

                   This cookie is set for ready availability of user timezone
                   in the backend.
                */

                const USER_TIMEZONE_COOKIE = 'user_tz';
                // Try to get the existing user timezone cookie stored
                // in the browser.
                user_tz = readCookie(USER_TIMEZONE_COOKIE);

                // Flag to determine whether a new cookie has to be created.
                create_cookie = false;

                if(user_tz) {
                    if(user_tz !== detected_user_tz) {
                        // If someone has changed the cookie in some way, we
                        // set a new cookie.
                        eraseCookie(USER_TIMEZONE_COOKIE);
                        create_cookie = true;
                    }
                } else {
                    create_cookie = true;
                }

                // Create a new cookie if create_cookie flag is set.
                createCookie(USER_TIMEZONE_COOKIE, detected_user_tz, 1);

            }
            $(document).ready(function(){
                var timezone = '';
                if (Intl && Intl.DateTimeFormat){
                    timezone = Intl.DateTimeFormat().resolvedOptions().timeZone;
                    // Map timezone name to a name that is familiar to our backend
                    if (mapped_tz && mapped_tz[timezone]) {
                        timezone = mapped_tz[timezone]
                    }
                }
                if (!timezone) {
                    timezone = jstz.determine_timezone();
                    timezone = timezone.name();
                }
                if (!timezone) {
                    // could not detect timezone, setting it to GMT timezone
                    timezone = 'Africa/Abidjan'
                }
                // Set as a cookie in browser for easy access in backend.
                setTimezoneCookie(timezone);

                // Set as a js variable for easy access across frontend.
                USER_TIMEZONE = timezone

                

                

                
                
                
                
                

                
                    var profile_timezone = "Asia/Dhaka";
                    if (timezone !== profile_timezone) {
                        $.ajax({
                            type: "POST",
                            url:"/users/AJAX/set-timezone/",
                            data: {
                            'timezone': timezone,
                            },
                        });
                    }
                

                
            });
        </script>
        

        
            

            
            
        

         

        
            

<link rel="stylesheet" href="./Number of steps _ Practice Problems_files/cookiebar.ffe531fab344.css">

<script type="text/javascript" src="./Number of steps _ Practice Problems_files/cookiebar.70181766db90.js.download" crossorigin="anonymous"></script>


        

        
            
        

        
            <!-- Hackerearth Hubspot Chat Widget -->




<link rel="stylesheet" href="./Number of steps _ Practice Problems_files/hubspot-chat-widget.3d8752b3cf0b.css">

<div class="support-widget-wrapper">
    <div class="ripple-loader">
        <div class="lds-ripple">
            <div></div>
            <div></div>
        </div>
    </div>

    <div class="support-section">
        <div id="hs-launch-button" class="customer-support-icon">
            <p>?</p>
        </div>
    </div>
</div>

<script type="text/javascript">
    function hubspotChatWidget() {
        function loadHubspotScripts() {
            const s = document.createElement('script');
            s.src = "//js-na1.hs-scripts.com/2586902.js";
            s.id = "hs-script-loader";
            s.type = "text/javascript";
            s.async = true;
            s.defer = true;
            document.getElementsByTagName("head")[0].appendChild(s);
        }

        function setHubspotConversationSettings() {
            window.hsConversationsSettings = {
                loadImmediately: false,
                inlineEmbedSelector: '#hs-launch-button',
                enableWidgetCookieBanner: true,
                disableAttachment: false,
            };
        }

        function onConversationsAPIReady() {
            const status = window.HubSpotConversations.widget.status();
            if (status.loaded) {
                if (window.isWidgetOpen) {
                    window.isWidgetOpen = false;
                    window.HubSpotConversations.widget.remove();
                } else {
                    window.isWidgetOpen = true;
                    window.HubSpotConversations.widget.load({ widgetOpen: true });
                }
            } else {
                window.isWidgetOpen = true;
                window.HubSpotConversations.widget.load({ widgetOpen: true });
            }
        }

        function activateHubspotWidget() {
            if (window.HubSpotConversations) {
                onConversationsAPIReady();
            } else {
                $('.ripple-loader').css('display', 'block');
                $('.support-section').css('display', 'none');
                loadHubspotScripts();
                window.hsConversationsOnReady = [onConversationsAPIReady, () => {
                    $('.ripple-loader').css('display', '');
                    $('.support-section').css('display', '');
                }];
            }
        }

        $(document).ready(function () {
            setHubspotConversationSettings();
            $(".customer-support-icon").on("click", function (e) {
                e.stopPropagation();
                activateHubspotWidget();
            });
        });
    }
    try {
        hubspotChatWidget();
    } catch (exception) {
        console.error(exception)
    }
</script>
        
    

<div id="tiptip_holder" style="max-width:200px;"><div id="tiptip_arrow"><div id="tiptip_arrow_inner"></div></div><div id="tiptip_content"></div></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div><a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/" class="offline-ui-retry"></a></div><div class="offline-ui offline-ui-up"><div class="offline-ui-content"></div><a href="https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/" class="offline-ui-retry"></a></div><script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript><iframe height="0" width="0" style="display: none; visibility: hidden;" src="./Number of steps _ Practice Problems_files/saved_resource.html"></iframe><iframe allow="join-ad-interest-group" data-tagging-id="G-18S5HG42RB" data-load-time="1734090533194" height="0" width="0" src="./Number of steps _ Practice Problems_files/rul.html" style="display: none; visibility: hidden;"></iframe>
<div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div></div><script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","802574803157043");fbq("set","agent","tmgoogletagmanager","802574803157043");fbq("track","PageView");</script>
<noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=802574803157043&amp;ev=PageView&amp;noscript=1"></noscript>
<script type="text/javascript" id="" charset="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","5799999160085112");fbq("track","PageView");</script>
<noscript>
 <img height="1" width="1" src="https://www.facebook.com/tr?id=5799999160085112&amp;ev=PageView
&amp;noscript=1">
</noscript>
</body></html>