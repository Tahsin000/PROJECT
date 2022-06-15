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
	
</style></head><body><article id="7cae1d6b-806d-467a-8050-cc9d329b2fad" class="page sans"><header><h1 class="page-title">PRESENTATION</h1></header><div class="page-body"><figure id="43f8f3a7-90ef-497c-b24f-b27218130249" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-01.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-01.jpg"/></a></figure><p id="f7c06879-e701-4de6-b1cb-a10c647c56ad" class="">
</p><figure id="fd930e42-dcf0-4d44-89ce-93b439ea6f87" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-02.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-02.jpg"/></a></figure><figure id="5f4d0b7f-bbfd-46b9-a281-f3a8223cb474" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-03.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-03.jpg"/></a></figure><figure id="b186315b-8046-4eb4-a8fb-0ca82bc404f2" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-04.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-04.jpg"/></a></figure><figure id="cb50c31e-a5cf-4d14-9834-450247adc4dc" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-05.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-05.jpg"/></a></figure><figure id="59827e6f-efe7-41ca-a689-7e3ba923a320" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-06.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-06.jpg"/></a></figure><figure id="dcebf789-c401-4200-8705-f7f059cc44d4" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-07.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-07.jpg"/></a></figure><figure id="efbbbf67-7237-4de9-9e73-34af4c794a78" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-08.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-08.jpg"/></a></figure><figure id="a2a50b68-0a7c-4574-a05e-263c5a5f67d4" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-09.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-09.jpg"/></a></figure><figure id="a7c1bc88-e94e-440b-97dd-bf4720368c8c" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-10.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-10.jpg"/></a></figure><figure id="a0a6d48c-93a6-4e48-b31d-1b850e3575b0" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-11.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-11.jpg"/></a></figure><figure id="e54fa8b9-3411-46b4-a3fa-608c20f5c9f2" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-12.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-12.jpg"/></a></figure><figure id="1f2f36d4-04c4-40d8-8a33-4ebc52cb667b" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-13.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-13.jpg"/></a></figure><figure id="ae40a31d-daf2-44ab-a5f7-f1e07a9e84b5" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-14.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-14.jpg"/></a></figure><figure id="dc827905-db4a-4052-a8ac-44693460d3a5" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-15.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-15.jpg"/></a></figure><figure id="5cb233db-cda9-4877-9fd4-482ffeaefa07" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-16.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-16.jpg"/></a></figure><figure id="ae4c4252-c313-4693-b12f-a8b74d0d11a3" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-17.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-17.jpg"/></a></figure><figure id="0c5525f0-4700-49b0-b184-bfb436667b5b" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-18.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-18.jpg"/></a></figure><figure id="1bed54da-a880-475b-a84b-a9e4df8158fc" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-19.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-19.jpg"/></a></figure><figure id="a34396af-4360-48b6-ba26-6d4a0eb2d48a" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-20.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-20.jpg"/></a></figure><figure id="bea414a7-96dd-4e38-90f5-f3aac9c0e3ed" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-21.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-21.jpg"/></a></figure><figure id="4b7fd8e5-2414-48ae-8223-388a2c721575" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-22.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-22.jpg"/></a></figure><figure id="e2e56ed8-29b4-4fa5-b8c1-b1a06aab3bfc" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-23.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-23.jpg"/></a></figure><figure id="7790a812-4bd6-4162-aa36-10134ceaca9d" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-24.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-24.jpg"/></a></figure><figure id="67d555af-5ec8-456c-8327-44268c1934ac" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-25.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-25.jpg"/></a></figure><figure id="8aabd7e4-5f4a-445b-a888-abb047c01dd2" class="image"><a href="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-26.jpg"><img style="width:2667px" src="PRESENTATION%2043f8f3a790ef497cb24fb27218130249/software_Power_presentation.pptx-26.jpg"/></a></figure></div></article></body></html>