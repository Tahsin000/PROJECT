<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8"/><title>PRESENTATION</title><style>
/* cspell:disable-file */
/* webkit printing magic: print all background colors */
html {
	-webkit-print-color-adjust: exact;
}
* {
	box-sizing: border-box;
	-webkit-print-color-adjust: exact;
}

html,
body {
	margin: 0;
	padding: 0;
}
@media only screen {
	body {
		margin: 2em auto;
		max-width: 900px;
		color: rgb(55, 53, 47);
	}
}

body {
	line-height: 1.5;
	white-space: pre-wrap;
}

a,
a.visited {
	color: inherit;
	text-decoration: underline;
}

.pdf-relative-link-path {
	font-size: 80%;
	color: #444;
}

h1,
h2,
h3 {
	letter-spacing: -0.01em;
	line-height: 1.2;
	font-weight: 600;
	margin-bottom: 0;
}

.page-title {
	font-size: 2.5rem;
	font-weight: 700;
	margin-top: 0;
	margin-bottom: 0.75em;
}

h1 {
	font-size: 1.875rem;
	margin-top: 1.875rem;
}

h2 {
	font-size: 1.5rem;
	margin-top: 1.5rem;
}

h3 {
	font-size: 1.25rem;
	margin-top: 1.25rem;
}

.source {
	border: 1px solid #ddd;
	border-radius: 3px;
	padding: 1.5em;
	word-break: break-all;
}

.callout {
	border-radius: 3px;
	padding: 1rem;
}

figure {
	margin: 1.25em 0;
	page-break-inside: avoid;
}

figcaption {
	opacity: 0.5;
	font-size: 85%;
	margin-top: 0.5em;
}

mark {
	background-color: transparent;
}

.indented {
	padding-left: 1.5em;
}

hr {
	background: transparent;
	display: block;
	width: 100%;
	height: 1px;
	visibility: visible;
	border: none;
	border-bottom: 1px solid rgba(55, 53, 47, 0.09);
}

img {
	max-width: 100%;
}

@media only print {
	img {
		max-height: 100vh;
		object-fit: contain;
	}
}

@page {
	margin: 1in;
}

.collection-content {
	font-size: 0.875rem;
}

.column-list {
	display: flex;
	justify-content: space-between;
}

.column {
	padding: 0 1em;
}

.column:first-child {
	padding-left: 0;
}

.column:last-child {
	padding-right: 0;
}

.table_of_contents-item {
	display: block;
	font-size: 0.875rem;
	line-height: 1.3;
	padding: 0.125rem;
}

.table_of_contents-indent-1 {
	margin-left: 1.5rem;
}

.table_of_contents-indent-2 {
	margin-left: 3rem;
}

.table_of_contents-indent-3 {
	margin-left: 4.5rem;
}

.table_of_contents-link {
	text-decoration: none;
	opacity: 0.7;
	border-bottom: 1px solid rgba(55, 53, 47, 0.18);
}

table,
th,
td {
	border: 1px solid rgba(55, 53, 47, 0.09);
	border-collapse: collapse;
}

table {
	border-left: none;
	border-right: none;
}

th,
td {
	font-weight: normal;
	padding: 0.25em 0.5em;
	line-height: 1.5;
	min-height: 1.5em;
	text-align: left;
}

th {
	color: rgba(55, 53, 47, 0.6);
}

ol,
ul {
	margin: 0;
	margin-block-start: 0.6em;
	margin-block-end: 0.6em;
}

li > ol:first-child,
li > ul:first-child {
	margin-block-start: 0.6em;
}

ul > li {
	list-style: disc;
}

ul.to-do-list {
	text-indent: -1.7em;
}

ul.to-do-list > li {
	list-style: none;
}

.to-do-children-checked {
	text-decoration: line-through;
	opacity: 0.375;
}

ul.toggle > li {
	list-style: none;
}

ul {
	padding-inline-start: 1.7em;
}

ul > li {
	padding-left: 0.1em;
}

ol {
	padding-inline-start: 1.6em;
}

ol > li {
	padding-left: 0.2em;
}

.mono ol {
	padding-inline-start: 2em;
}

.mono ol > li {
	text-indent: -0.4em;
}

.toggle {
	padding-inline-start: 0em;
	list-style-type: none;
}

/* Indent toggle children */
.toggle > li > details {
	padding-left: 1.7em;
}

.toggle > li > details > summary {
	margin-left: -1.1em;
}

.selected-value {
	display: inline-block;
	padding: 0 0.5em;
	background: rgba(206, 205, 202, 0.5);
	border-radius: 3px;
	margin-right: 0.5em;
	margin-top: 0.3em;
	margin-bottom: 0.3em;
	white-space: nowrap;
}

.collection-title {
	display: inline-block;
	margin-right: 1em;
}

.simple-table {
	margin-top: 1em;
	font-size: 0.875rem;
	empty-cells: show;
}
.simple-table td {
	height: 29px;
	min-width: 120px;
}

.simple-table th {
	height: 29px;
	min-width: 120px;
}

.simple-table-header-color {
	background: rgb(247, 246, 243);
	color: black;
}
.simple-table-header {
	font-weight: 500;
}

time {
	opacity: 0.5;
}

.icon {
	display: inline-block;
	max-width: 1.2em;
	max-height: 1.2em;
	text-decoration: none;
	vertical-align: text-bottom;
	margin-right: 0.5em;
}

img.icon {
	border-radius: 3px;
}

.user-icon {
	width: 1.5em;
	height: 1.5em;
	border-radius: 100%;
	margin-right: 0.5rem;
}

.user-icon-inner {
	font-size: 0.8em;
}

.text-icon {
	border: 1px solid #000;
	text-align: center;
}

.page-cover-image {
	display: block;
	object-fit: cover;
	width: 100%;
	max-height: 30vh;
}

.page-header-icon {
	font-size: 3rem;
	margin-bottom: 1rem;
}

.page-header-icon-with-cover {
	margin-top: -0.72em;
	margin-left: 0.07em;
}

.page-header-icon img {
	border-radius: 3px;
}

.link-to-page {
	margin: 1em 0;
	padding: 0;
	border: none;
	font-weight: 500;
}

p > .user {
	opacity: 0.5;
}

td > .user,
td > time {
	white-space: nowrap;
}

input[type="checkbox"] {
	transform: scale(1.5);
	margin-right: 0.6em;
	vertical-align: middle;
}

p {
	margin-top: 0.5em;
	margin-bottom: 0.5em;
}

.image {
	border: none;
	margin: 1.5em 0;
	padding: 0;
	border-radius: 0;
	text-align: center;
}

.code,
code {
	background: rgba(135, 131, 120, 0.15);
	border-radius: 3px;
	padding: 0.2em 0.4em;
	border-radius: 3px;
	font-size: 85%;
	tab-size: 2;
}

code {
	color: #eb5757;
}

.code {
	padding: 1.5em 1em;
}

.code-wrap {
	white-space: pre-wrap;
	word-break: break-all;
}

.code > code {
	background: none;
	padding: 0;
	font-size: 100%;
	color: inherit;
}

blockquote {
	font-size: 1.25em;
	margin: 1em 0;
	padding-left: 1em;
	border-left: 3px solid rgb(55, 53, 47);
}

.bookmark {
	text-decoration: none;
	max-height: 8em;
	padding: 0;
	display: flex;
	width: 100%;
	align-items: stretch;
}

.bookmark-title {
	font-size: 0.85em;
	overflow: hidden;
	text-overflow: ellipsis;
	height: 1.75em;
	white-space: nowrap;
}

.bookmark-text {
	display: flex;
	flex-direction: column;
}

.bookmark-info {
	flex: 4 1 180px;
	padding: 12px 14px 14px;
	display: flex;
	flex-direction: column;
	justify-content: space-between;
}

.bookmark-image {
	width: 33%;
	flex: 1 1 180px;
	display: block;
	position: relative;
	object-fit: cover;
	border-radius: 1px;
}

.bookmark-description {
	color: rgba(55, 53, 47, 0.6);
	font-size: 0.75em;
	overflow: hidden;
	max-height: 4.5em;
	word-break: break-word;
}

.bookmark-href {
	font-size: 0.75em;
	margin-top: 0.25em;
}

.sans { font-family: ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol"; }
.code { font-family: "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace; }
.serif { font-family: Lyon-Text, Georgia, ui-serif, serif; }
.mono { font-family: iawriter-mono, Nitti, Menlo, Courier, monospace; }
.pdf .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK JP'; }
.pdf:lang(zh-CN) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK SC'; }
.pdf:lang(zh-TW) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK TC'; }
.pdf:lang(ko-KR) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK KR'; }
.pdf .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.pdf .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK JP'; }
.pdf:lang(zh-CN) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK SC'; }
.pdf:lang(zh-TW) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK TC'; }
.pdf:lang(ko-KR) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK KR'; }
.pdf .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.highlight-default {
	color: rgba(55, 53, 47, 1);
}
.highlight-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.highlight-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.highlight-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.highlight-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.highlight-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.highlight-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.highlight-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.highlight-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.highlight-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.highlight-gray_background {
	background: rgba(241, 241, 239, 1);
}
.highlight-brown_background {
	background: rgba(244, 238, 238, 1);
}
.highlight-orange_background {
	background: rgba(251, 236, 221, 1);
}
.highlight-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.highlight-teal_background {
	background: rgba(237, 243, 236, 1);
}
.highlight-blue_background {
	background: rgba(231, 243, 248, 1);
}
.highlight-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.highlight-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.highlight-red_background {
	background: rgba(253, 235, 236, 1);
}
.block-color-default {
	color: inherit;
	fill: inherit;
}
.block-color-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.block-color-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.block-color-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.block-color-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.block-color-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.block-color-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.block-color-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.block-color-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.block-color-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.block-color-gray_background {
	background: rgba(241, 241, 239, 1);
}
.block-color-brown_background {
	background: rgba(244, 238, 238, 1);
}
.block-color-orange_background {
	background: rgba(251, 236, 221, 1);
}
.block-color-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.block-color-teal_background {
	background: rgba(237, 243, 236, 1);
}
.block-color-blue_background {
	background: rgba(231, 243, 248, 1);
}
.block-color-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.block-color-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.block-color-red_background {
	background: rgba(253, 235, 236, 1);
}
.select-value-color-pink { background-color: rgba(245, 224, 233, 1); }
.select-value-color-purple { background-color: rgba(232, 222, 238, 1); }
.select-value-color-green { background-color: rgba(219, 237, 219, 1); }
.select-value-color-gray { background-color: rgba(227, 226, 224, 1); }
.select-value-color-opaquegray { background-color: rgba(255, 255, 255, 0.0375); }
.select-value-color-orange { background-color: rgba(250, 222, 201, 1); }
.select-value-color-brown { background-color: rgba(238, 224, 218, 1); }
.select-value-color-red { background-color: rgba(255, 226, 221, 1); }
.select-value-color-yellow { background-color: rgba(253, 236, 200, 1); }
.select-value-color-blue { background-color: rgba(211, 229, 239, 1); }

.checkbox {
	display: inline-flex;
	vertical-align: text-bottom;
	width: 16;
	height: 16;
	background-size: 16px;
	margin-left: 2px;
	margin-right: 5px;
}

.checkbox-on {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20width%3D%2216%22%20height%3D%2216%22%20fill%3D%22%2358A9D7%22%2F%3E%0A%3Cpath%20d%3D%22M6.71429%2012.2852L14%204.9995L12.7143%203.71436L6.71429%209.71378L3.28571%206.2831L2%207.57092L6.71429%2012.2852Z%22%20fill%3D%22white%22%2F%3E%0A%3C%2Fsvg%3E");
}

.checkbox-off {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20x%3D%220.75%22%20y%3D%220.75%22%20width%3D%2214.5%22%20height%3D%2214.5%22%20fill%3D%22white%22%20stroke%3D%22%2336352F%22%20stroke-width%3D%221.5%22%2F%3E%0A%3C%2Fsvg%3E");
}
	
</style></head><body><article id="7cae1d6b-806d-467a-8050-cc9d329b2fad" class="page sans"><header><h1 class="page-title">PRESENTATION</h1></header><div class="page-body"><figure id="70df1065-ed80-4c6d-865d-901ed12819f4" class="image"><a href="https://lh5.googleusercontent.com/cez8aGvli4kKfDinVIYKnnADslpZXgQDbgld8LESwuxTeyET5oIG6zIenmuH0gBJGb40BG1YMQIvIQAVQE2br3EOevh3Tfa2A4aRnjpD_qU6WmD9O4xXBvg38D52W_gqtUHkHSrOFuG6lfQ_0g"><img style="width:240px" src="https://lh5.googleusercontent.com/cez8aGvli4kKfDinVIYKnnADslpZXgQDbgld8LESwuxTeyET5oIG6zIenmuH0gBJGb40BG1YMQIvIQAVQE2br3EOevh3Tfa2A4aRnjpD_qU6WmD9O4xXBvg38D52W_gqtUHkHSrOFuG6lfQ_0g"/></a></figure><h1 id="661ddf62-3514-4dfd-bb74-8c5c1e60331c" class=""><em><strong>Software Engineering</strong></em></h1><h1 id="b1485d74-e86f-4afb-a843-8a71d381c3e8" class=""><em><strong>Software Requirements Specification (SRS) Document</strong></em></h1><p id="7afc41ac-efb4-435c-81f8-6750dfcdb432" class=""><em>Author(s): Tahsin Abrar</em></p><p id="718eaca2-95b3-4085-a500-b8201ce6a905" class=""><em>Montasir Tasnim Al Rafi</em></p><p id="7e73a17c-faad-435f-947f-a125d6b35f25" class=""><em>Nimur Rashid Imon</em></p><p id="ad623606-c35a-4e0a-b320-29cc6d579e3a" class=""><em>Mohammad Rahatul Islam</em></p><p id="72578b17-ebf0-44b6-b13d-df83fbf25db3" class=""><em>Md. Rafidul Islam</em></p><p id="142ff935-278a-4f68-9e6d-fc240d7649fc" class=""><em>Affiliation: Team HHJN</em></p><p id="5044a65f-6649-457c-885e-b1f9ab709649" class=""><em>Date: July 07, 2021</em></p><div id="1c16114c-c427-4b78-954c-3f071aa7dd36" class="column-list"><div id="301515a2-6fd7-49dc-b9de-9cf676bf6d99" style="width:100%" class="column"><p id="a0730bfa-9369-4ae4-b3ab-c1f0a30a077e" class=""><strong>Contents</strong></p></div></div><p id="06614e8f-b4f3-4bef-97af-2ea276c7d2b2" class="">1. Introduction</p><p id="107e5c66-0e22-41ab-aa73-6a1bc59bb52d" class="">1.1 Purpose of this document</p><p id="8af97f67-6c65-46c8-87d9-5c79135b340c" class="">1.2 Scope of this document</p><p id="2e86125b-ee78-43a5-bb8d-366be1330277" class="">1.3 Overview</p><p id="ee9a4c1d-b090-40dc-b68f-66e353feb069" class="">1.4 Business Context</p><p id="95f2eaf8-f598-4e4e-b24b-ab16634b6d4f" class="">2. General Description</p><p id="ac2fcb43-6ea6-44b7-bc14-d8306cff4034" class="">2.1 Product Functions</p><p id="dd49a03a-f400-4e1b-9a77-dfac880a5131" class="">2.2 User Characteristics Stephen</p><p id="d4a1378c-cee9-4243-9e77-136b41e1bfa3" class="">2.3 User Objectives</p><p id="2283c898-c733-45fb-8917-a6530ffe38e6" class="">2.4 General Constraints</p><p id="872c9a09-3015-4dec-9bd5-328cc0f74165" class="">3. Functional Requirements</p><p id="8647134a-61d2-42b3-a0b8-dad5509fdd76" class="">4. Interface Requirements</p><p id="3d4d71d8-3224-4861-9bec-41644c3ae3b2" class="">4.1 User Interfaces</p><p id="a94308b7-28ba-488e-81ec-91f5311ec64b" class="">4.2 Hardware Interfaces</p><p id="cef550a7-2afb-445d-8d8b-47a9e2d2f053" class="">4.3 Communications Interfaces</p><p id="7985bcbb-6c57-4347-bf73-5755aa8cbcc3" class="">4.4 Software Interfaces</p><p id="b72eee20-faa7-4e12-a77a-bb94f3e933c6" class="">5. Performance Requirements</p><p id="8021096e-3964-4735-8c45-345bce8f9c33" class="">6. Other non-functional attributes</p><p id="45650f3d-fa30-4d8f-ac6b-c7846ac0fd43" class="">6.1 Security</p><p id="c1eee03c-0091-4fb9-b180-34c32dd0ccd5" class="">6.2 Reliability</p><p id="5f1a231c-e2d2-48b2-9d9f-ecefe902a7a1" class="">6.3 Maintainability</p><p id="d998a634-b46d-4cbc-88fd-b69fc31858c1" class="">6.4 Portability</p><p id="4c5255bf-d1fc-4f6b-93a3-be450ff4ced3" class="">7. Operational Scenarios</p><p id="1b761a70-2f65-41ac-8d3c-b45c8c37e0ac" class="">8. Preliminary Use Case Model</p><p id="740b3dcc-9bd5-4dc2-ad79-3775b280cc05" class="">8.1 Use Case Model</p><p id="87db3646-d4a5-4945-b476-8ae244d7a6c1" class="">9. Updated Schedule</p><p id="9a1acc6b-8c2a-472d-a647-512840959d64" class="">10. Appendices</p><p id="81abc2e7-a00d-4611-8d70-dd02565b71e7" class="">10.1 Definitions, Acronyms, Abbreviations</p><p id="6d7db86f-c9c7-462a-ab19-93868d012101" class=""><strong>1. Introduction</strong><strong></strong></p><p id="eb6a3786-8e29-4bd9-936b-4534e56992f8" class=""><strong>1.1 Purpose of this document</strong></p><p id="36640b02-a46c-4fa3-aa2a-5e4318baf6cc" class="">The purpose of this document is to describe in detail the IIUC Bus Management System which will be useable and accessible for Students of International Islamic University Of  Chittagong. In addition to listing and explaining, the document serves as a roadmap for the  software, of what we are currently doing on the software, what we plan to do. Within this  document, readers can find information about our general project concepts, a list of  functional and non-functional requirements, examples of our graphical user interfaces (GUI),  as well as information about our current schedule and case models.</p><p id="b7477169-6bb7-41e7-a924-50d417d11786" class=""><strong>1.2 Scope of this document</strong></p><p id="990c5d22-5a66-45fe-bc33-ee591240639b" class="">This project is a prototype for the Bus Management system and it is accessible for only  the students, guest of International Islamic University Chittagong . This has been  implemented under the guidance of University professor. This project is useful for the Bus  Management authority and as well as to all the passengers.</p><p id="fe2183a0-665f-4d4f-a25a-f0bbda3c5deb" class=""><strong>1.3 Overview</strong></p><p id="9a998ede-2941-45aa-a7f0-54a9233a7bec" class=""><strong></strong>The Purpose of the IIUC Bus management system is to ease bus management and to  create a convenient and easy-to-use application for the students and guest . The system is  based on a relational database with its bus management and reservation functions. Above all,  we hope to provide a comfortable user experience along for the target audience. This will  allow anyone at International Islamic University, the ability to find information not only about the regular bus schedule, but also the special day ones. In addition to that, it will  provide map of different route.</p><p id="cf104aa6-10fc-4924-8658-1299f083d653" class=""><strong>1.4 Business Context</strong><strong></strong></p><p id="e35e814f-b17d-4878-b8fe-05c57e6df6ae" class="">Islamic University Chittagong (IUC) was founded in 1995 by Islamic University  Chittagong Trust (IUCT), a non-profit organization. In 2000, IUC was upgraded to  International Islamic University Chittagong (IIUC).[4]</p><p id="a036b1f2-90f5-4aa0-b36e-6057d95222f6" class="">International Islamic University Chittagong (IIUC) is one of the top graded Government  approved private universities in Bangladesh. The credit for the idea of establishing this  University goes to Islamic University Chittagong Trust (IUCT), which is the founder  organization of the University. This Trust is a non-political and non-profit oriented voluntary  organization, registered with the Government of the People&#x27;s Republic of Bangladesh under  the Societies Act XXI of 1860. This Trust felt the need for a university under private initiative  in view of the absence of institutions of higher learning based on Islamic vision of life in the  public sector. With this idea having its origin in 1990, the Trust discussed the concept of a  private Islamic university with a group of intellectuals, Islamic thinkers, and educationists,  from home and abroad. It was these Islamic personalities that came forward to materialize the  dream of such an institution by putting their ideas, energies and fulfilling other requirements.  In 1992 an anchor organization called Islamic University Chittagong Trust (IUCT) was  founded under the aegis of this body and an institution of higher learning under the name of  Islamic University Chittagong got the Government&#x27;s approval on February 11, 1995 and the  University was founded accordingly in the same year. Thus a long cherished dream of the  people of Chittagong came into reality. In the year 2000 Islamic University Chittagong (IUC)  was upgraded into International Islamic University Chittagong (IIUC), thus it got a scope to  extend its services to the Ummah at large.</p><p id="d3fbcf24-1c4a-470c-9046-1d82cd175d99" class="">In 2004 IIUC was recognized as one of the 9 top-graded Private Universities by a  Government-appointed High Powered Team led by the UGC Chairman. At present, it is the  largest private university with 370 (Full time: 270 &amp; Adjunct: 100) teachers and 14000  students from home and abroad. A good number of full-time teachers and students are  studying abroad for pursuing higher studies with IIUC&#x27;s scholarship or financial assistance or  continuation of services.</p><p id="ff92c713-e2cf-476b-ab73-ab421513e616" class="">The Graduation degrees of <strong>CSE</strong>, <strong>EEE </strong>&amp; <strong>CCE </strong>are accredited by the <strong>BAETE</strong>. IIUC grants  waiver, generous financial assistances and scholarships to the students at different rates  depending on the results of their previous examinations and financial condition. IIUC  participated in different national and international contests, winning prizes for obtaining  prestigious positions. IIUC successfully organized five International Conferences on different  important issues relating to education, ethics and Islamization of knowledge. It also arranged the  National Computer Programming Contest in collaboration with the Ministry of Science &amp; ICT  and Bangladesh Computer Council (BCC) as part of its regular programs.</p><p id="a67dcd73-81fd-42bd-b015-b6d2d53df6da" class="">The campus is in Kumira, Chittagong (facing Dhaka-Chittagong Highway).</p><p id="2211ae2e-a5e6-4cf7-828c-273cf8fc00b7" class="">Hostel accommodation is available. The hostels are as follows (separate hostel for foreign  students):</p><p id="276d39aa-d161-4d70-aa13-4f1ba32e8a9d" class=""><strong>Permanent Campus (Kumira):</strong></p><p id="a17a4255-bf54-40e6-8c27-a435be9f275a" class="">1. Hazrat Abu Bakr (R.A) Hall</p><p id="680ec227-9596-44f6-ad02-c27f4d6c4c02" class="">2. Hazrat Umar (R.A) Hall</p><p id="3921c3f9-f9d8-49b8-9c80-e9e4c469b460" class="">3. Hazrat Uthman (R.A) Hall</p><p id="9c92e988-9690-483a-bcf8-6a629a9d50ab" class="">4. Hazrat Ali (R.A) Hall (Under Construction)</p><p id="f4b33a96-ba5e-4e47-9ae3-4fa5ec5e5680" class=""><strong>Chittagong City:</strong></p><p id="c056bdce-a5a1-415f-8e58-908ecc605d54" class="">1.Prasanti Vaban (Kornel hat)</p><p id="37cd6e18-2d1b-4e94-8a01-b69570ee7c62" class=""><strong>2. General Description</strong><strong></strong></p><p id="a0b20a65-2043-483f-83f3-b4b51d0cce10" class=""><strong>2.1 Product Functions</strong></p><p id="9c6435e0-3c4c-4a47-8ab6-5cc9673cbf15" class="">The proposed system will be able to maintain Bus Schedule for users. Admins will be  able to log on to update information and documents available for the general public. Among  certain features there will be a database, route map, a real time calendar, an GUI, and other  features. Any user using the software shall be able to use every feature mentioned providing  their computer has the proper software and/or hardware.</p><p id="250b2075-c414-48d0-8d60-b71c4d2e7001" class=""><strong>2.2 User Characteristics</strong></p><p id="b3e445be-5579-4879-8a9d-6811127237a8" class="">The user of this software will be students, guest who wants to visit IIUC. They can know  weekly bus schedule and also special day bus schedule. Also admins can use the software to  ease up and maintain bus system in a effective way. The user interface is made in a friendly  way so that user can find what they are looking for easily.</p><p id="f07d24d7-f68f-4a26-9dff-f16a41231d4c" class=""><strong>2.3 User Objectives</strong></p><p id="effdc737-84b3-4897-9601-2ed6f7cbf92e" class="">Users of the system should be able to retrieve Bus Schedule information between two  location with the given date/time of travel from the database. The system will support three types of user privileges, Student, Guest and Admin. Student and Guest will have access to  Bus Schedule information and some other limited features but the admins will have full  control of bus management.</p><p id="539050d3-b13b-4d75-9a96-266edb128fca" class=""><strong>2.4 General Constraints</strong></p><p id="d3d90030-dba7-4b3c-9e45-f2b0c22a201b" class="">● The project must be completed within the time-constraints of the semester.  ● The project must be completed using Programming language like: Java, Python etc.</p><p id="72807aa9-a80d-4636-bc8f-cfb7fa250c44" class=""><strong>3. Functional Requirements</strong><strong></strong></p><p id="2dbc7148-01e2-410d-95b0-22e3c2a46552" class="">1. <strong>System shall allow Sign-in for Student</strong></p><p id="ad6f59aa-e510-4848-9a91-1258e4c45931" class="">1. <strong>Description</strong></p><p id="e4067511-42cf-4daf-a1b9-72295b5b6412" class="">There will a home interface. From there when user clicks on Sign-in button then that  will take user to another page and prompt for an username and password. After login  the user shall be taken back to the Schedule page where there will be profile info,  schedule, request bus, edit options.</p><p id="b6208f02-7df7-41cc-b4b9-04a67bc1b44c" class="">2. <strong>Technical issues</strong></p><p id="c4e50e83-5a7a-43aa-8bdf-b08c211edb81" class="">● System allows to add Username.</p><p id="2ba47801-e8a2-4a26-b952-a2385e997f9b" class="">● System allows to add Password.</p><p id="3d6ee48e-8920-450e-90e9-a63ee5f5b928" class="">3. <strong>Risks</strong></p><p id="5cbfaca1-0fdd-4ffa-adf3-4c8e2bcbc966" class="">A possible threat exists if the system does not recognize a proper login. To prevent  this risk user must always remember their username and password. If they forget  those then they have to contact with the IT department. To prevent this risk extensive  testing shall be done to insure there are no problems.</p><p id="fe9724b4-6535-4d13-972a-865bfede7afa" class="">1.1 <strong>System shall allow Student to See Profile Info</strong></p><p id="f6cdf644-0c42-43b2-9712-903f594f16b3" class=""><strong>1. Description</strong></p><p id="d474c504-f07f-4e7f-a999-8863a4946a13" class=""><strong></strong>After sign-in student can see immediately their own Profile which will contain the  data which they have given during sign-up.</p><p id="a19718ca-b9f8-4e9c-b19e-fc439309a144" class=""><strong>2. Technical issues</strong></p><p id="360d92a5-0ac1-4070-9cee-314354659e42" class="">● System Displays Username.</p><p id="b3d349e7-71ff-4512-b340-f54ff92e1ab2" class="">● System Displays Gender.</p><p id="bfbec970-4433-4fc7-abf8-595fcbd1f9bf" class="">● System Displays ID.</p><p id="3d87b671-8a26-4e03-9d7e-51dcb37b3794" class="">● System Displays Location.</p><p id="7facec98-0f99-4cf7-8bc0-25e9ca38cdc3" class=""><strong>3. Risks</strong></p><p id="b521b925-1901-4878-a17e-b6c6902ee23f" class="">A possible threat exists if the system does not recognize a proper login. To prevent this  risk user must always remember their username and password. If they forget those then  they have to contact with the IT department. To prevent this risk extensive testing shall  be done to insure there are no problems.</p><p id="f5a08c42-a7e1-4a89-9f07-031be7591c6b" class="">1.2 <strong>System shall allow Student to See Schedule</strong></p><p id="fd19cbc0-e880-4e05-8e2e-63e80a340a56" class=""><strong>1. Description</strong></p><p id="9712d3cf-b9a8-4b44-8252-452b8a26bbdd" class=""><strong></strong>After sign-in student can click on schedule option which will show them regular,  Friday and special day schedule.</p><p id="c7ec83d7-f659-4316-aa08-3bbda8ae6e1a" class=""><strong>2. Technical issues</strong></p><p id="0bb24d7c-416f-4849-91e5-e2cabb141751" class="">● System Displays Bus No.</p><p id="28bcb1f6-6efe-4bd7-a382-27f7d04f78d4" class="">● System lets to search.</p><p id="138f1396-b5ed-4f0c-8302-0e7a0ceea80d" class="">● System Displays From the location which Bus will start and also map of that  location.</p><p id="4d3e3056-41f9-4d97-a2b0-c08362e4c6df" class="">● System Displays To the location which Bus will stop and also map of that  location.</p><p id="8fdbfe65-5c46-41cc-b31b-d86d956587bc" class="">● System Displays Time of the Schedule.</p><p id="27f87b78-9792-402a-987c-f26ad8611e56" class="">● System Displays Owner of the Bus.</p><p id="6c757df2-606b-4452-b4cc-e4002bcd14c6" class=""><strong>3. Risks</strong></p><p id="428c42c7-4d65-48be-84d5-60f5fd8f3b0a" class="">A possible threat exists if the system does not recognize a proper login. To prevent this  risk user must always remember their username and password. If they forget those then  they have to contact with the IT department. To prevent this risk extensive testing shall be  done to insure there are no problems.</p><p id="a97ca9ef-92de-45b6-bee9-c9c14bd20bde" class="">1.3 <strong>System shall allow Student to Request Bus</strong></p><p id="0143390f-ec80-48f9-9c52-78a6cf7cbcd2" class=""><strong>1. Description</strong></p><p id="8fb5fc7d-72e2-451d-9141-ae959102c78f" class=""><strong></strong>After sign-in student can click on request bus option which will take request.</p><p id="61e6bec9-fef5-49fe-8e70-d5000ced5bfe" class=""><strong>2. Technical issues</strong></p><p id="669fd2f3-5bea-427e-bfcd-691b426568fc" class="">● System Allows to Add Destination.</p><p id="121f8a09-50a0-4bbd-a1ac-8d408488ffaa" class=""><strong>3. Risks</strong></p><p id="cb4e1a4d-ae56-4b7f-9828-f59a656a7557" class=""><strong></strong>A possible threat exists if the system does not recognize a proper login. To prevent this risk user must always remember their username and password. If they forget those  then they have to contact with the IT department. To prevent this risk extensive testing  shall be done to insure there are no problems.</p><p id="6747278d-3d68-4c7f-8066-5c8d2cdb247f" class="">1.4. <strong>System shall allow Student to Edit Profile</strong></p><p id="5fa5fd53-e8ba-46e5-945e-7c87fe52048c" class=""><strong>1. Description</strong></p><p id="7ad534e2-f2d6-4723-b5b2-0891dfc03106" class=""><strong></strong>After sign-in student can click on profile edit to edit their profile info.</p><p id="5330caae-6f19-4b0b-adeb-c6be8bae91ec" class=""><strong>2. Technical issues</strong></p><p id="fcf8b208-b983-48d5-a268-6bb43c435159" class="">● System allows to edit username.</p><p id="b7d7c0d6-cfe6-4467-bb18-a77d9e67f7e2" class="">● System allows to edit gender .</p><p id="59c0c118-32c5-4a71-95c9-0068f0f5f02d" class="">● System allows to update password.</p><p id="9f498161-5847-481e-9fdb-39bc30b88a56" class="">● System allows to update location.</p><p id="0b38c9f7-93b7-4a05-9044-f5cca5a1744e" class=""><strong>3. Risks</strong></p><p id="7543f244-6200-47bd-ba54-9d75941244f5" class="">A possible threat exists if the system does not recognize a proper login. To prevent this  risk user must always remember their username and password. If they forget those then  they have to contact with the IT department. To prevent this risk extensive testing shall be  done to insure there are no problems.</p><p id="48a96142-3cf0-4124-99f7-6e4b366dde41" class="">1.5 <strong>System shall allow Student log out</strong></p><p id="8fb85622-d0b4-4f8c-9088-cecfb7e29ccd" class=""><strong>1. Description</strong></p><p id="f642b8f5-0e52-40e7-8d58-844f38094b84" class="">There will a home interface After a successful login on the sign-in page the last button  shall allow the student to log out. After log out the user shall be taken back to the home  page.</p><p id="7076fb10-1734-4c0c-bfca-cc14393c1fe2" class=""><strong>2. Technical issues</strong></p><p id="760c4443-93c5-48f1-8360-a635fb1cb5fc" class="">● Implementing a timeout feature after a period of inactivity.</p><p id="811448ca-cf51-4ad0-a2e1-6799785f8748" class="">● Changing the schedule page to a home page after logging out.</p><p id="989a1161-da82-4ccb-8553-140b8ce41ad5" class=""><strong>3. Risks</strong></p><p id="3cb8abb5-b704-4347-9cf4-7a9172fd72d7" class="">A possible threat exists if the system does not recognize a proper log out and keeps the  student logged in. To prevent this risk extensive testing shall be done to insure there are  no problems.</p><p id="adf211ca-31ba-4b73-b2c0-dba15951a2a2" class="">1.6 <strong>System shall allow Student to See Notification</strong></p><p id="4313257b-ec53-48fd-acaa-99c9a28b937f" class=""><strong>1. Description</strong></p><p id="fbd18807-15b1-47e3-91e0-af04f2ab29ea" class=""><strong></strong>After sign-in student can see notification if their request of bus is accepted. <strong>2. Technical issues</strong></p><p id="d9f43208-1b5c-4094-8813-7b33957c30b8" class="">● System Displays Bus No.</p><p id="ff8786e2-1728-4c42-86d2-2c444115335e" class="">● System Displays From the location which Bus will start.</p><p id="e1f80536-3035-416d-a4f4-77fb42cffd3b" class="">● System Displays Time of the Schedule.</p><p id="b45e62ec-2d4a-48fd-9b43-82409f50c607" class=""><strong>3. Risks</strong></p><p id="7deb5ec6-2350-4ce3-ba2c-dd347069779f" class="">A possible threat exists if the system does not recognize a proper login. To prevent this  risk user must always remember their username and password. If they forget those then  they have to contact with the IT department. To prevent this risk extensive testing shall be  done to insure there are no problems.</p><p id="a2b501fa-c8ae-46e5-9d89-b6164e52d195" class="">2. <strong>System shall allow Sign-up for Student</strong></p><p id="eb877e08-a361-4d5b-9a2f-3fd5d6d424da" class="">1. <strong>Description</strong></p><p id="02325267-6886-4465-b18e-71ac88d7fc09" class="">There will a home interface. From there when user clicks on Sign-up button then that</p><p id="1837b51d-de18-4de1-bfae-1253bca08883" class="">will take user to another page and will ask to input username and password. After  login the user shall be taken back to the Schedule page where they can search their  desired schedule. Also they can edit their own profile</p><p id="50a2e10f-eee1-422a-bdb2-0b78204febfb" class="">2. <strong>Technical issues</strong></p><p id="e3c669ec-a48c-4ee6-a193-fbdb0d19879f" class="">● System allows to add Username.</p><p id="b6b573f6-9bb0-402c-8930-3b788e7daf4d" class="">● System allows to add Gender.</p><p id="00ef3efe-2c5b-41ed-a502-bc504f856fdd" class="">● System allows to add ID.</p><p id="98f30676-7392-4300-88a0-16de5822e246" class="">● System allows to add Password.</p><p id="5e0c04ec-7dfc-4ab0-b93d-f4ced9f05004" class="">● System allows to add location.</p><p id="95f87dba-0d13-429e-9219-0c1fcd4c80e3" class="">3. <strong>Risks</strong></p><p id="9e2635dc-ee48-4909-9401-d0ba198ef432" class="">A possible threat exists if correct information is not given. To prevent this risk extensive  testing with multiple user logins should find any problems.</p><p id="cf9ab52e-7190-4075-9391-33ea6e67f806" class=""><strong>3. System shall allow Guest</strong></p><p id="1925ae47-de5e-4dbd-932e-99d97ef2310e" class=""><strong>1. Description</strong></p><p id="f37e7b83-fddf-4627-ae3b-636366377de0" class="">There will a home interface. From there when user clicks on Guest button then that will  take user to another page and will ask to input name, gender and reason why visiting  IIUC.</p><p id="0d3f00a0-2401-4404-8af0-bb4bce3e2f0b" class=""><strong>2. Technical issues</strong></p><p id="8d07f983-50cf-4b24-8ec0-4efa3b5807cc" class="">● System allows to add Name.</p><p id="e0530ebe-4243-4b48-8c38-a282775822bb" class="">● System allows to add Gender.</p><p id="512025f2-b781-431b-879b-25b85dd2cc02" class="">● System allows to add Reason why visiting IIUC.</p><p id="a4149d99-75cb-4d7a-b699-107e65082dfe" class=""><strong>3. Risks</strong></p><p id="9801983a-b48f-4568-8748-7da1e1c33ba9" class="">A possible threat exists if guest doesn’t give correct details. To prevent this risk  extensive testing shall be done to insure there are no problems.</p><p id="33c2dee9-959f-46ed-91ce-b6ddafd9d11e" class=""><strong>3.1 System shall allow Guest to see schedule</strong></p><p id="51554baf-4b87-402a-a855-cc0de1b8865f" class=""><strong>1. Description</strong></p><p id="5540b12c-ff89-43c2-8e7a-66bb1fb97949" class=""><strong></strong>After inputting required information the guest shall be taken back to the Schedule  page where they can see only regular and special day schedule.</p><p id="b3d368d2-c5cd-4534-852f-dc545f0b14db" class=""><strong>2. Technical issues</strong></p><p id="a4706c60-a708-4d20-97bb-8aa58f4613cf" class="">● System Displays Bus No.</p><p id="b8832a3c-8f2c-49d6-8b06-19a8e65d3d29" class="">● System lets to search.</p><p id="35cbd110-0c1b-4ec6-8457-4783a18a9a98" class="">● System Displays From the location which Bus will start and also map of that  location.</p><p id="a7e5924e-6a70-49d6-a204-d1e3b35be9b2" class="">● System Displays To the location which Bus will stop and also map of that  location.</p><p id="9c19d793-4f27-46af-86f7-5aa09ccbb5c4" class="">● System Displays Time of the Schedule.</p><p id="052bc88f-a0a4-4f80-83b2-c5f521790cf7" class="">● System Displays Owner of the Bus.</p><p id="ed056540-0760-49d5-aad8-7362d91416d0" class=""><strong>3. Risks</strong></p><p id="ac19cfef-9d50-47d0-b869-6af4ac7ab724" class="">A possible threat exists if guest doesn’t give correct details. To prevent this risk extensive  testing shall be done to insure there are no problems.</p><p id="7c7f2aaa-a63b-4f12-8678-be6f5f086c4b" class=""><strong>4. System shall allow the administrator</strong></p><p id="325f3b17-1718-4353-b9a8-8fae61565b1b" class=""><strong>1. Description</strong></p><p id="c2974e07-c7f4-4d55-8105-69b49db4f127" class="">There will a home interface. From there when user clicks on Admin button then that will  take user to another page and will ask to input admin username and admin password.  After login the user shall be taken back to the Admin page from where they can maintain  the bus system.</p><p id="c2e3f0e1-3e09-4b8c-b04b-73bfcf73b6a2" class=""><strong>2. Technical issues</strong></p><p id="91cc3478-2a17-40e2-8b55-7a2a41a92710" class="">● System allows to add Admin Username.</p><p id="2a964140-59ef-4106-af32-c10a262460c3" class="">● System allows to add Admin Password.</p><p id="da0f041c-1bef-4aac-8828-c3a7beb9f8e4" class=""><strong>3. Risks</strong></p><p id="b655b09d-4cd2-472d-9259-2c098f6efdf4" class="">A possible risk to the system if system doesn’t recognize the Admin. Admin should  always remember their username and password and input them correctly.</p><p id="fb1d4ccc-d0e8-44e8-bf60-2081509004d1" class=""><strong>4.1 System shall allow administrator to Add Bus and Location</strong></p><p id="bfb99b0e-2946-48e5-b29d-ae3bf6a22b3c" class=""><strong>1. Description</strong></p><p id="cd37238e-54bc-40e6-aa7f-1116afd29f28" class="">After a successful login an administrator shall be able to Add bus and location so that  adequate transportation is available for students and guest.</p><p id="8b68212e-9ff4-44ca-994c-574ae5d3a482" class=""><strong>2. Technical issues</strong></p><p id="a8f7f4b9-2fa8-49cf-8f0f-e470c6ec4afe" class="">● System allows to add Bus no.</p><p id="ef7a79f9-29bd-49d6-bd8c-5481994bbc16" class="">● System allows to Search for Bus.</p><p id="3d973d37-a758-478f-a1dc-bb18597d4180" class="">● System allows to add Driver name.</p><p id="38e7c9c3-462c-4746-9db0-c07032b25b9c" class="">● System allows to add Driver number.</p><p id="6a7ebf04-6b80-41c7-8680-d57fb7f08be8" class="">● System allows to add License number.</p><p id="472eea1f-7418-41a7-a9a9-e0ba07ce399a" class="">● System allows to add Owner name.</p><p id="90822a9f-7d85-4f9a-b178-7d4ef85b43a1" class="">● System allows to add Location.</p><p id="63b3423b-2ce3-491f-b150-42dd273621b2" class="">1. <strong>Risks</strong></p><p id="a4b80251-32d8-49c3-ae17-3755899e6f30" class="">Correct information of bus no, driver name, driver number, license number, owner  name should be given.</p><p id="f5952a6c-de0f-410e-afc1-bec260c196a1" class=""><strong>4.2 System shall allow the administrator to Edit Bus Status</strong></p><p id="29272462-044e-4ebf-ae46-cbd3523e0d45" class=""><strong>1. Description</strong></p><p id="47f8fde6-abee-4009-b76c-5e88361be2ff" class="">After a successful login an administrator shall be able to edit bus status.</p><p id="632e19cf-7c6a-4203-b302-ea574dbaf5d1" class=""><strong>2. Technical issues</strong></p><p id="2e18f67e-f13a-47fa-bb9f-6c02169c9b4c" class="">● System allows to Search for Bus.</p><p id="bf1745a3-3ac4-4118-a2eb-824a7d4e0aae" class="">● System allow to Update and Delete Bus no.</p><p id="20e7aa41-951e-4871-9be8-f4410b19b31d" class="">● System allows to Update and Delete Driver name.</p><p id="591dfb4b-8130-44a9-a7ec-5f8dfb535566" class="">● System allows to Update and Delete Driver number.</p><p id="86a324f2-a1fa-43ed-af94-8cea950b5ad1" class="">● System allows to Update and Delete License number.</p><p id="b5c6f502-72a9-479c-8d33-74e28000d9fb" class="">● System allows to Update and Delete Owner name.</p><p id="2d7dacf3-341b-4295-9b19-66c01d7155b2" class="">● System allows to Update Bus status.</p><p id="6719281f-db6f-469b-ae94-74ed3dffb200" class=""><strong>3. Risks</strong></p><p id="a15dd9c1-8885-41af-8c37-3bf3dc9eee3c" class="">A possible risk is if Bus status is deleted mistakenly. To prevent this risk admin should be  careful.</p><p id="4655617c-0c7d-45f3-84b4-acb13879d5a6" class=""><strong>4.3 System shall allow administrator to Add Schedule</strong>.</p><p id="11a64abb-c21f-48a1-9d9b-d6c170877d8a" class=""><strong>1. Description</strong></p><p id="8ce0fe51-7e6a-43c9-8095-90b2120bc8ba" class="">After a successful login an administrator shall be able to add schedule. By add schedule  option admin can ease up and make new schedule depending on needs of Students and  Guest.</p><p id="38ea401e-f8b1-48e3-9c5e-8b2e3cb999c0" class=""><strong>2. Technical issues</strong></p><p id="2b0a9dfe-e58a-447c-8060-b0be0a987eaa" class="">● System allows to Add Bus no.</p><p id="0ba895ed-7ed4-4ff1-a096-5eff02f5afdc" class="">● System allows to Add the location from which Bus will start.</p><p id="853f9ceb-dbc8-4384-9dbc-55cf9d1b716a" class="">● System allows to Add time of the scheduled Bus.</p><p id="81680c4b-c5bf-461b-a778-d7fc72c50d7a" class="">● System allows to Add name of the Owner.</p><p id="5af2871e-7dc6-4f09-be26-9bbd12e430db" class="">● System allows to Add Mobile.</p><p id="4a5dd0e4-9a38-4678-9874-0b501dd1beef" class=""><strong>3. Risks</strong></p><p id="3130f518-33ec-4eb1-8e8f-48ad5ceca261" class="">Correct information of bus no, from location, to location, time, owner, mobile should be  given.</p><p id="af92c0e5-6a4b-4a05-9f35-e0a2813d5dbe" class=""><strong>4.4 System shall allow the administrator to Edit Schedule Status</strong></p><p id="1c2a6660-94f0-44ba-80ee-3fd457ee7a4a" class=""><strong>1. Description</strong></p><p id="46d75c34-6775-435f-bfad-636451755006" class="">After a successful login the administrator shall be able to edit the schedule depending on  the needs of students and guest so that a well transportation system is available for them. <strong>2. Technical issues</strong></p><p id="f13e9821-1000-4faf-95cd-906f7de50de9" class="">● System allows to Update or Delete Bus no.</p><p id="71432911-1511-4c2c-9175-f4477b930177" class="">● System allows to Update or Delete the location from which Bus will start. ● System allows to Update or Delete the location to which Bus will stop. ● System allows to Update or Delete time of the scheduled Bus.</p><p id="b67684eb-f7b3-4250-ab2a-aad42d4d7f85" class="">● System allows to Update or Delete name of the Owner.</p><p id="a4e0a33f-4a05-4029-801a-85d69d013ebe" class="">● System allows to Update or Delete Mobile.</p><p id="4154fb14-020d-452f-b4b8-03a74b068ae6" class=""><strong>3. Risks</strong></p><p id="639667a7-6cd2-4410-b4b4-bce0c5d61cd2" class="">A possible risk is if Schedule status is deleted mistakenly. To prevent this risk admin  should be careful.</p><p id="70d3bc4d-72e1-4135-9833-f188ca388ff1" class=""><strong>4.5 System shall allow the administrator to Manage Special day and Friday Schedule 1. Description</strong></p><p id="1cb41584-7a7f-4572-b504-f8f3f0c5f5f2" class="">After a successful login the administrator shall be able to manage the special day and  Friday schedule depending on the needs of students and guest so that a well  transportation system is available for them.</p><p id="4221f789-a76d-4a16-9f06-94b87a778968" class=""><strong>2. Technical issues</strong></p><p id="1034ab4b-53ad-4c21-b913-97b20ade8362" class="">● System allows to Add or Delete Bus no.</p><p id="c6dd9b82-3c07-41c6-ac68-601c87fad2c8" class="">● System allows to Add or Delete the location from which Bus will start. ● System allows to Add or Delete the location to which Bus will stop.</p><p id="9f7e942d-3b0a-4390-b98c-5bdadb8efa5e" class="">● System allows to Add or Delete time of the scheduled Bus.</p><p id="4388f247-b4c4-4046-b191-a9c462fe7065" class="">● System allows to Add or Delete name of the Owner.</p><p id="e2ce9071-5d9d-4afb-9625-7fe12a894436" class="">● System allows to Add or Delete Mobile.</p><p id="a68ccd9a-5c36-4a6b-8166-3208c9e9f187" class="">● System allows to Add or Delete date.</p><p id="4a2dff18-a419-4865-a99f-041d259ed4f4" class=""><strong>3. Risks</strong></p><p id="02d89166-5815-438d-b959-09a0d9af09da" class="">A possible risk is if Special status is deleted mistakenly. To prevent this risk admin  should be careful.</p><p id="30354050-799d-4926-8747-b9d512d9be14" class=""><strong>4.6 System shall allow the administrator to Review request from student 1. Description</strong></p><p id="38fc251e-6aab-4af0-b32b-40aee9273dc7" class="">After a successful login the administrator shall be able to review request from student. <strong>2. Technical issues</strong></p><p id="ac4cdd45-d981-4b31-8344-512fcb6bbb54" class="">● System allows to approve or cancel request.</p><p id="946b3995-5fb4-481c-bc84-cbfbbd942cd3" class=""><strong>3. Risks</strong></p><p id="4336c9ff-fd91-4dd5-b4c6-ab6b732d6745" class="">All request should be reviewed so that transportation is available for student of all  locality.</p><p id="0b02f6f9-66d3-4ee8-bcaa-12f2bd9abfc5" class=""><strong>4.7 System shall allow the administrator to manage User Info</strong></p><p id="0e50ea2f-1c54-4a3c-8a17-59029d71f557" class=""><strong>1. Description</strong></p><p id="98d7108d-eef1-4323-856f-0e70579d0d38" class="">After a successful login the administrator shall be able to view and delete user details. <strong>2. Technical issues</strong></p><p id="8127165b-3692-4073-b695-37e444692002" class="">● System allows to display Student and Guest list with all details.</p><p id="d7a94d1f-e39e-4d16-bc06-734d963f486f" class="">● System allows to delete any Student or Guest from database.</p><p id="e911d6d0-119a-4e2a-a29d-13a4507ffc74" class="">● System allows to Print from the list.</p><p id="a53b86a6-47d7-4fdb-993a-1345ed6d2c2f" class=""><strong>3. Risks</strong></p><p id="694ceb61-caee-431c-bdb0-96733fc79c90" class="">User info should be maintained regularly.</p><p id="9eb53317-2dbd-4257-bc2d-61c6f83f923e" class=""><strong>4. Interface Requirements</strong><strong></strong></p><p id="5a90bdd6-6647-4d8a-9b81-d1f0474c2233" class=""><strong>4.1 User Interfaces</strong></p><p id="53489ff7-a265-489a-991a-f7beafda1b77" class="">Describes how this product interfaces with the user.</p><p id="281f4697-efc6-4dc1-b259-edbc3e38cd23" class="">● <strong>4.1.1 Starting Interface</strong></p><figure id="8227cbf5-ce6b-4d5c-b3d7-0425eb41a332" class="image"><a href="https://lh4.googleusercontent.com/AwPA_JdM4yCuxFqDfAEFqntjYw8_c8NuZ9F3YhX3DyoHokP3evBA82WupikZosXBgCA1130qqM8g_UB_Fp9XVsShIN3HG9mODokUI4scYqfqshW9GoNOz9oCNLW1z_L1oMguNfddFk_oJyTMsw"><img src="https://lh4.googleusercontent.com/AwPA_JdM4yCuxFqDfAEFqntjYw8_c8NuZ9F3YhX3DyoHokP3evBA82WupikZosXBgCA1130qqM8g_UB_Fp9XVsShIN3HG9mODokUI4scYqfqshW9GoNOz9oCNLW1z_L1oMguNfddFk_oJyTMsw"/></a></figure><figure id="d06365fc-06b6-4fa2-9be8-0ce269038424" class="image"><a href="https://lh3.googleusercontent.com/p76-WvbPdP7NCpg0Q7NVX5cD8_yjLdrYqU9Jazyplgrqk224R-IaS6_TKdU-votNaj6EaWAaP8n17bnfnHfT9qOG8lQGc5AENH4CFveapeNlpHkXseQ6KxPOiRKOgfy_xirw2cYNePoM83b1JQ"><img src="https://lh3.googleusercontent.com/p76-WvbPdP7NCpg0Q7NVX5cD8_yjLdrYqU9Jazyplgrqk224R-IaS6_TKdU-votNaj6EaWAaP8n17bnfnHfT9qOG8lQGc5AENH4CFveapeNlpHkXseQ6KxPOiRKOgfy_xirw2cYNePoM83b1JQ"/></a></figure><p id="8b96374a-f5ea-426f-b052-c2fdb1363544" class="">● <strong>4.1.2 Home Interface</strong></p><p id="ba679007-3e80-4ea0-8efa-a56bccf44c4e" class="">● <strong>4.1.3 Sign-in Interface</strong></p><figure id="201ff6b8-18e0-470a-a044-14a7710d7520" class="image"><a href="https://lh4.googleusercontent.com/c_V05M5fOCrFlRPCybmuMZYlM13409mnNmjSEFh1vfL412WwmJvL886eh4rcr5Ljh-TCm6_v0m0RuWKu_q6bl1suuXTtsbJlY_PN7v9vwz6uycxq8BMYyB3slIv40z60I3w_hs8WzFlvW6DcKA"><img src="https://lh4.googleusercontent.com/c_V05M5fOCrFlRPCybmuMZYlM13409mnNmjSEFh1vfL412WwmJvL886eh4rcr5Ljh-TCm6_v0m0RuWKu_q6bl1suuXTtsbJlY_PN7v9vwz6uycxq8BMYyB3slIv40z60I3w_hs8WzFlvW6DcKA"/></a></figure><figure id="6129bfca-3edc-43b3-834c-317e854640b5" class="image"><a href="https://lh4.googleusercontent.com/DwzijMylhH_xdo3hP2o2FhZM-wtzcn6QgA1OUgy2x5sMSX6aCKShANdyC5KW4Qdltfi8QTXZEMl8iGjrgXmhInD9ZUvyqw6wRvndp_fVSzAyRRCGxaqUYxfPRgkzEVcwX7iPpaLQbupvoout-g"><img src="https://lh4.googleusercontent.com/DwzijMylhH_xdo3hP2o2FhZM-wtzcn6QgA1OUgy2x5sMSX6aCKShANdyC5KW4Qdltfi8QTXZEMl8iGjrgXmhInD9ZUvyqw6wRvndp_fVSzAyRRCGxaqUYxfPRgkzEVcwX7iPpaLQbupvoout-g"/></a></figure><figure id="7e0e9d5a-0023-4c38-81af-8478a41aa17c" class="image"><a href="https://lh6.googleusercontent.com/W82TOHN2iN1I44u5zzqvQgTuF4Vh5VH2CM9sXQmeKw1VpW1Sv3mv7kEtAVP_zLu0_rGjdJtIZj97CUMuxuVJTLpSC5L3RtWihj1l75clW9_x2WODCiif9DGvW7wmXdTNtg43pZBYLUOnYJmpNQ"><img src="https://lh6.googleusercontent.com/W82TOHN2iN1I44u5zzqvQgTuF4Vh5VH2CM9sXQmeKw1VpW1Sv3mv7kEtAVP_zLu0_rGjdJtIZj97CUMuxuVJTLpSC5L3RtWihj1l75clW9_x2WODCiif9DGvW7wmXdTNtg43pZBYLUOnYJmpNQ"/></a></figure><figure id="9ff663c1-685d-400a-91fa-aacb9fdee6c1" class="image"><a href="https://lh6.googleusercontent.com/sdUN647nHDJjXbIBzVJ9qlcE9nlWqqIb_u5qNLBFQsTVzHT63MA_0RG7RZx8uKbxfVBCEQlDzeRnlwKlqMLGwBaGLpxyhXZXm5F59UduhmbOgeUh2IgQ6uD5mMNKof62QEj8dNS0hVCRTz4cVA"><img src="https://lh6.googleusercontent.com/sdUN647nHDJjXbIBzVJ9qlcE9nlWqqIb_u5qNLBFQsTVzHT63MA_0RG7RZx8uKbxfVBCEQlDzeRnlwKlqMLGwBaGLpxyhXZXm5F59UduhmbOgeUh2IgQ6uD5mMNKof62QEj8dNS0hVCRTz4cVA"/></a></figure><p id="1db19bd4-bfb3-449e-8ed8-ef9b656eb35c" class="">● <strong>4.1.4 Sign-up Interface</strong></p><figure id="f0e5897b-289f-498b-bd6e-25bf2ed34e85" class="image"><a href="https://lh5.googleusercontent.com/sH7984Yxd0yr7arg90D0ifE6bkSz4iDn9DQhIPFM4ACtMrOkAKe_ovxwOlUPDT4xdkGKbtL79an_Ryn8F5iPW5Fq-CMF1P0lnTMnRgAj0ukj7G2OqrzBJ3n3tdFdBbL5-ARVySDQ9hmISqeYmg"><img src="https://lh5.googleusercontent.com/sH7984Yxd0yr7arg90D0ifE6bkSz4iDn9DQhIPFM4ACtMrOkAKe_ovxwOlUPDT4xdkGKbtL79an_Ryn8F5iPW5Fq-CMF1P0lnTMnRgAj0ukj7G2OqrzBJ3n3tdFdBbL5-ARVySDQ9hmISqeYmg"/></a></figure><p id="7a34df24-7d74-4fb5-a5ad-e74f3f804e77" class="">● <strong>4.1.4 Guest Interface</strong></p><figure id="839386f2-3947-4e04-89c2-1e21f3ed1537" class="image"><a href="https://lh6.googleusercontent.com/5nI9oxACHDr8Zp3GRypwW-aA9ywVRzAFcbL-KcEiWAiXZwXw6BRLZxn5-QhY4hsu_vbTMNY-nzmFgU0dDJWu_q-0khHJQmu6zUwUn-LuRsrgoNe4EF6XF2sBEtwIaLkG_MJLR2-Rzj3Jxm-OSQ"><img src="https://lh6.googleusercontent.com/5nI9oxACHDr8Zp3GRypwW-aA9ywVRzAFcbL-KcEiWAiXZwXw6BRLZxn5-QhY4hsu_vbTMNY-nzmFgU0dDJWu_q-0khHJQmu6zUwUn-LuRsrgoNe4EF6XF2sBEtwIaLkG_MJLR2-Rzj3Jxm-OSQ"/></a></figure><figure id="d5d9b4e6-c25e-46c2-8e73-f37c94a83192" class="image"><a href="https://lh6.googleusercontent.com/X5iO1s3PUmuutBBJPXfwJ75aE_xQwO28BLUJLLLFa6OEZqo1qCCdTkiA8py_aZO9q_pnR1MHOgkeBiDe8T1P3v7ZSvxsTCNer4ga8JCB5AQBZONnpVrobyEuf6jSARUoGjPAIUx9PtF1MQpVXg"><img src="https://lh6.googleusercontent.com/X5iO1s3PUmuutBBJPXfwJ75aE_xQwO28BLUJLLLFa6OEZqo1qCCdTkiA8py_aZO9q_pnR1MHOgkeBiDe8T1P3v7ZSvxsTCNer4ga8JCB5AQBZONnpVrobyEuf6jSARUoGjPAIUx9PtF1MQpVXg"/></a></figure><p id="467ec148-9748-439f-9ec0-dcd258f83512" class="">● <strong>4.1.4 Admin Interface</strong></p><figure id="9afbbc9d-b69a-4f9b-b651-b31fd65f6654" class="image"><a href="https://lh6.googleusercontent.com/w8IPelhKDrWpfu7DaWFzQtn8nt9EwPsVySCBKdqCpUH0zUjchfntSNPktIou2mQxrGcjLyHx0JwgQ-IEz3LA09k9Nn5A1ADIKN27PZ33CN8l-U9Slaajfl9LQc5vRHROjKSSIFtxc4A37XVPXQ"><img src="https://lh6.googleusercontent.com/w8IPelhKDrWpfu7DaWFzQtn8nt9EwPsVySCBKdqCpUH0zUjchfntSNPktIou2mQxrGcjLyHx0JwgQ-IEz3LA09k9Nn5A1ADIKN27PZ33CN8l-U9Slaajfl9LQc5vRHROjKSSIFtxc4A37XVPXQ"/></a></figure><figure id="16415584-a485-4c75-9a43-eda3ccfac002" class="image"><a href="https://lh5.googleusercontent.com/dCRYrmadlNjI-5QZiX6jPD-rjAS8G2pzfak5B00G8_-czGfpp843vZRctZKH8InpblyIHu6LemUSAzY5d44uYSq_gvXY7HnnHT-AnBIdhPiwSMtqsZtjrI0mxQPubqJdyuoyYPEMiKmIm5tZGg"><img src="https://lh5.googleusercontent.com/dCRYrmadlNjI-5QZiX6jPD-rjAS8G2pzfak5B00G8_-czGfpp843vZRctZKH8InpblyIHu6LemUSAzY5d44uYSq_gvXY7HnnHT-AnBIdhPiwSMtqsZtjrI0mxQPubqJdyuoyYPEMiKmIm5tZGg"/></a></figure><figure id="35ee72aa-f190-4bcc-9ace-b091508d6b12" class="image"><a href="https://lh4.googleusercontent.com/zx7eH_iC0kcf6BqHqi9FEvwAeqKTKArd-lfjFShisw1LeyY6ypam7MvNQDcpTgEk3R-rY-4_8V3XfdRcF-qSh8vLtcf4jq3A7eLef5kKColrXzJTrqJRCLaKsTMXpluw64Hr4Iqd_ISB-5eryg"><img src="https://lh4.googleusercontent.com/zx7eH_iC0kcf6BqHqi9FEvwAeqKTKArd-lfjFShisw1LeyY6ypam7MvNQDcpTgEk3R-rY-4_8V3XfdRcF-qSh8vLtcf4jq3A7eLef5kKColrXzJTrqJRCLaKsTMXpluw64Hr4Iqd_ISB-5eryg"/></a></figure><figure id="a8c19cbe-f988-46a0-9b55-008f48bb9a15" class="image"><a href="https://lh6.googleusercontent.com/h2HOa_gS3dgqzc0bolKmrZPsLYhjNFpm60NmcNQ5D9QPZRA3JTr8ak8o8_GM0Qa2kZ1PQfOAkchUKIoKHdWq2Ax0jndEscUVuzUQzlF2BRRKXPDX33wJ7cWzgl-phTW07c2UsoQMf4zkDi1JLg"><img src="https://lh6.googleusercontent.com/h2HOa_gS3dgqzc0bolKmrZPsLYhjNFpm60NmcNQ5D9QPZRA3JTr8ak8o8_GM0Qa2kZ1PQfOAkchUKIoKHdWq2Ax0jndEscUVuzUQzlF2BRRKXPDX33wJ7cWzgl-phTW07c2UsoQMf4zkDi1JLg"/></a></figure><figure id="c2e8c59f-f78a-4eb5-8966-e6d80571eed6" class="image"><a href="https://lh6.googleusercontent.com/SGPh9B8KShAWETQ70-qKuJcZcZ7QlmfKAcLnFVcxT9gk39jiiKCnnmUsfKtGcQUN8S_Y4tOYyfI4dehyDitwOEHl81vTBaQ18JMwc5NwEtC4MYVLbpR68Kk8-7KFS0LrZcZ1evxTrbdLd6rggg"><img src="https://lh6.googleusercontent.com/SGPh9B8KShAWETQ70-qKuJcZcZ7QlmfKAcLnFVcxT9gk39jiiKCnnmUsfKtGcQUN8S_Y4tOYyfI4dehyDitwOEHl81vTBaQ18JMwc5NwEtC4MYVLbpR68Kk8-7KFS0LrZcZ1evxTrbdLd6rggg"/></a></figure><p id="730adc86-8e27-44e4-942b-76855eb3f16b" class=""><strong>4.2 Hardware Interfaces</strong></p><p id="03864c25-a2bc-45a3-9dbe-9355b651d529" class="">The users need to have access to a keyboard, monitor, and a computer to view and manage our  Software. Users are highly recommended to have a mouse, and speakers for full functionality. <strong>4.3 Communications Interfaces</strong></p><p id="19857881-54da-41e2-aab4-05e26f22f446" class="">The users need to have access to unrestricted Internet via broadband, dial-up or wired.  <strong>4.4 Software Interfaces</strong></p><p id="8c287266-b08d-41f9-bf3e-c03eb294ba40" class="">The users need to have java software to manage. All the software in the system should be upto  date. Also a functional operating system that includes an up to date Internet browser with  JavaScript enabled, such as Internet Explorer, Google Chrome, Firefox, Opera or Safari. In  addition to a functional operating system, and Internet browser, users need an up-to-date version  of Adobe Flash Player.</p><p id="4ea4b174-2b8b-4fef-bcc0-201c6334242a" class=""><strong>5. Performance Requirements</strong><strong></strong></p><p id="4df043fe-2ac1-4c58-8aca-ec355b0511b4" class="">Users should have a moderate computer with at least a 56k modem for Internet access.</p><p id="aea40afa-4e10-4c8e-9d24-8667e6fd7a4c" class=""><strong>6. Other non-functional attributes</strong><strong></strong></p><p id="0e0f61c7-68da-43c1-b4ac-68a17c4433b4" class=""><strong>6.1 Security</strong></p><p id="ab40a801-1186-471d-818f-87721c691af8" class="">The secure system shall be able to verify the administrator and other’s username and password.  In order to maintain correct information and features on the site, only the administrator has full  functionality to add, edit and manage the system, all information, general schedule, calendar etc.  In addition to the system verifying the administrator’s username and password, it should  recognize all the user’s username and password. The distinction between these two users needs  to be implemented, so that the student or guest can view the schedule and find what they are  looking for but not add, edit or delete any information without the admins permission.  <strong>6.2 Reliability</strong></p><p id="3ffd81a5-3ac4-466f-b30f-7912ba2490a3" class="">The system should be accessible 24 hours a day, 7 days a week as long as the IIUC bus  management server is up and running correctly. The users of the system shall be able to use consistently and from any computer they want to.</p><p id="80ff9bdc-4c8a-44d4-9f6f-d9957c4cf5f8" class=""><strong>6.3 Maintainability</strong></p><p id="b2ac1ab6-a8bc-44c2-a0c0-d262ff85dcc1" class="">The system should be easily maintainable for the average administrator. These individuals  should be able to add, edit, or delete any information or features they feel necessary, with very  little knowledge about Java’s system. In order to do so, the system should be well documented  and provide simple navigation, so future individuals can keep the software up-to-date.  <strong>6.4 Portability</strong></p><p id="6bd63c2a-381a-4812-ba9e-bd0041d5b590" class="">The system should allow users to access from anywhere, from any computer.</p><p id="7e2220d9-b61f-4478-9ef7-b4d3abb6bce2" class=""><strong>7. Operational Scenarios</strong><strong></strong></p><p id="1caed635-bc41-4e39-8309-aec3f49832db" class="">1. <strong>Administrator login</strong></p><p id="b963cbb1-5f60-4c69-944f-7d9ac617b2cc" class="">The user is presented with a login form requesting username and password. They enter  their username and password. The system then logs them in and shows them the  administrator interface.</p><p id="6c04f310-8253-4288-8239-2978f237a45c" class="">2. <strong>Student Sign-in</strong></p><p id="9f770a9d-1033-49a8-83b7-7c2f8ba5e6aa" class="">The user is presented with a login form requesting username and password. They enter  their username and password. The system then logs them in and shows them the student Sign-in interface.</p><p id="936fef45-cd50-4a4b-9ef3-dfd5c67fb6f9" class="">3. <strong>Student can see profile, bus schedule and also edit profile</strong></p><p id="6e4f6beb-7307-422b-9b8f-97609d302674" class="">When student signs-in then their Profile will be shown immediately. They can see the  different bus schedule if they click schedule button. They can also request for a bus.  Student can also edit their profile if they click profile Edit option.</p><p id="6b46297f-7712-4a8a-b1fe-311de8ca6da0" class="">4. <strong>Student can request for bus</strong></p><p id="be21a244-5895-4f8a-a6e7-84e7f58fc341" class=""><strong></strong>After student sign-in in their account they can request for bus. A notification icon will be   available after requesting which will show whether request is approved or not.  5. <strong>Student Sign-up</strong></p><p id="39a4f4b1-fd27-4cf8-a31e-cfa75568015b" class="">The user is presented with a sign-up form requesting to give username, id, gender,  password, location. The system then redirect them to sign-in interface.</p><p id="be27b97a-8c1b-4fa4-b647-8ce28c689f26" class="">6<strong>. Guest Service</strong></p><p id="53d1c57e-a79d-4e00-9d8a-7cdb60ba5e34" class="">The user is presented with a guest form requesting name, gender and reason of going to  IIUC. After guest fill-up the form they can see the regular and special day bus schedule. 7<strong>. Administrator can add bus and location</strong></p><p id="3e936f34-844f-4fa9-b1fe-8d7700a1f3d0" class="">After logged in admins can add bus and add location which will be available for student  and guest.</p><p id="3a258438-8ea0-44ff-8c62-e9c281c0f4a3" class="">8<strong>. Administrator manage bus status</strong></p><p id="2274e83e-762c-4dd9-a6bd-46b5358e2e37" class="">After logged in admins can update bus status. They can also delete bus from database. 9<strong>. Administrator can add schedule</strong></p><p id="ad861c6d-8fd2-4238-be56-b3020dad8fd4" class="">After logged in admins can add schedule for students and guests.</p><p id="a49b0fba-bf06-458a-8828-2a94331e2932" class="">10<strong>. Administrator manage schedule status</strong></p><p id="46209275-a4e5-4bc3-a2be-f13b54bc4f8b" class="">After logged in admins can update schedule. They can also delete schedule.  11<strong>. Administrator manage special day service</strong></p><p id="89baea16-7b53-43cf-ad78-4e4878f0c7c1" class=""><strong></strong>After logged in admins can add special day service for students and guests. They can also  remove special day service.</p><p id="dd4b3ac2-64d1-415a-9eb7-556aee5b3103" class="">12. <strong>Administrator manage Friday schedule</strong></p><p id="4c016241-1352-4527-a32e-7c86155e50ba" class=""><strong></strong>After logged in admins can manage Friday schedule in which they can add or remove bus  Service.</p><p id="2b486411-7fe1-41bb-b5e6-33740c1a79ce" class="">13. <strong>Administrator can review request</strong></p><p id="b0bd847a-5ff3-49a2-b299-96d746b69659" class=""><strong></strong>After logged in admins can review Bus request from students. They have the power to  both approve or cancel request.</p><p id="65fe4b1d-f358-4079-bdb7-e50e52a15c3d" class="">14. <strong>Administrator can manage all the User info</strong></p><p id="07d70bd0-02a9-4fa5-a7bd-2520eaf3c8b9" class="">After logged in admins can view all the students and guests who are using this software. They can delete any user they want. They can also print user info.</p><p id="9fb470e0-b9e3-41bf-a9b6-77d5b5a6d561" class=""><strong>8. Preliminary Use Case Model</strong><strong></strong></p><p id="f16f40ea-4fc6-485d-9286-c5059fb28067" class=""><strong>8.1 Use Case Model</strong></p><p id="46b79228-f7d2-456d-a093-667bad6145ce" class="">Link of the model in Pdf format:  <a href="https://drive.google.com/file/d/1osh_3PZAxNu7A1thrtwQSalh4X7PMUMY/view?usp=sharing">https://drive.google.com/file/d/1osh_3PZAxNu7A1thrtwQSalh4X7PMUMY/view?usp=sharing</a></p><p id="b7ea1b02-f2f3-47f8-834d-871c7fb20943" class=""><strong>9. Updated Schedule</strong><strong></strong></p><p id="ad3d293b-f07c-49e1-affa-e87df8f28990" class=""><strong>Date Time Project Percentage</strong><strong> </strong>April 12,2021 8.25PM 0% April 20,2021 4.34PM 3% April 21,2021 11.00PM 4% April 28,2021 3.00PM 8% May 5,2021 10.00PM 15% May 21,2021 8.00PM 20% May 26,2021 9.00PM 24% June 3,2021 8.00PM 30% June 20,2021 7.00PM 35% June 22,2021 11.00PM 50% June 24,2021 8.00PM 60% June 25,2021 9.00PM 65% June 27,2021 12.20AM 70% June 28,2021 9.00PM 75% June 29.2021 7.00PM 80% June 30,2021 11.30PM 82% July 1,2021 7.00PM 85% July 2,2021 11.30PM 88% July 3,2021 8.00PM 90% July 4,2021 9.00PM 93% July 5,2021 12.10AM 95% <strong>July 6,2021 7.00PM 100%</strong></p><p id="399add88-7e64-421c-ae86-d3ada5b37180" class=""><strong>10. Appendices</strong><strong></strong></p><p id="fec900cc-1780-4c4b-a1f3-131e6505720c" class=""><strong>11. Definitions, Acronyms, Abbreviations</strong></p><p id="ad28ff3f-b8a0-4a4c-be47-d5d58e3da68f" class="">Provides definitions of unfamiliar definitions, terms, and acronyms.</p><p id="6650e770-6e96-43fe-8c50-91c6f8e6fae2" class="">● <strong>Java</strong>: Java is an object-oriented programming language that produces software for  multiple platforms</p><p id="c131f1c4-f90b-4de4-9b06-674c735a1836" class="">● <strong>Software</strong>: The programs and other operating information used by a computer. ● <strong>GUI</strong>: Graphical User Interface</p><p id="09d559eb-dee7-4d5e-8d5f-87cac8978fe9" class="">● <strong>IIUC</strong>: International Islamic University Chittagong</p><p id="a0143b3f-f465-43cf-88e1-d57bbc525a1f" class="">● <strong>XAMPP</strong>: The Full Form Of XAMPP is Cross-Platform (X), Apache (A), MariaDB (M),  PHP (P) and Perl (P).</p><p id="69712964-1826-4269-a9aa-ecf8f1be527f" class="">● <strong>Database</strong>: A structured set of data held in a computer, especially one that is accessible in  various ways.</p><p id="03ac3bf4-f13a-4403-b4cb-72cfd555bfa7" class="">● PHP: Hypertext Pre-processor</p><p id="f611504f-477f-493e-83f4-e14ebe856c9a" class="">● <strong>CLI</strong>: Command Line Interface</p><p id="79056315-dcb8-4ad9-9276-1dffecbbf78d" class="">● <strong>API</strong>: Application Programming Interface</p><p id="92c72d8d-6492-4eef-8ef7-f7152e5d3569" class="">● <strong>RAM</strong>: Random Access Memory</p><p id="7fd4a8a4-82fe-4279-862d-b0409810ab5f" class="">● <strong>ROM</strong>: Read-Only Memory</p><p id="27e6b02e-138a-4336-ab87-270d5ad20f27" class="">● <strong>HTML</strong>: Hypertext Markup Language</p><p id="b3b13176-06b9-40ca-8bc0-f049816bbc7a" class="">● <strong>CSS</strong>: Cascading Style Sheets</p><p id="bbf9162c-6b8a-4bc4-aa44-bc8003e69222" class=""><strong>WYSIWYG program</strong>: What you see is what you get</p><p id="289e9c1f-5c47-4be9-88ae-ce1001ee1149" class="">
</p></div></article></body></html>