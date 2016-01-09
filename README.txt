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