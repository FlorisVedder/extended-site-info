README.txt
==========

This module extends the site information page admin/config/system/site-information
with two fieldsets:
- about
- contact info

The module is just a template to have hotstart for extra fields on the site
information page (or other pages / forms). If you need more fields, copy the module
and add the extra fields.

You can use the blocks that are provided by this module. But you can also retrieve the
values by variable_get('the_name_of_the_variable');

ABOUT
=====
Submit a title and a description about the site. The module provides a block to render
this information:
 - A description of the objective of the site

CONTACT INFO
============
Provides a title, phone and email field. This information is made available by two blocks:
 - The contact info related to the site
 - Small version of contact info, for example in footer
The email and phone are saved in a hidden field as links. The saved links are encoded
to ascii so we reduce the possibility for spambots to determine these information.
Encoding of email adresses is normaly in content done by the invisimail module.

GIT BRANCHE: with-contact-page
==============================
This branche is mainly made for my own purposes to get some experience with the menu and the
drupals menu and theme api.

The branch provides an extra page located on www.site.url/contact see contact-page.tpl.php

The branch provides extra theming with a wrapper for the contact block. The wrapper is used
to theme the item_list with contact items seperate (as the wrapper child) and provide an url
in the contact-block-wrapper.tpl to the contact page.