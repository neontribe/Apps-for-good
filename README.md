## Atrium install for Apps for Good

This repository has an atrium install that will be used for the Apps for Good
project.  It is a standard atrium install.

### Database setup

The sites/default/settings.php is listed as a git ignore file.  To get this
checkout to work you will need to carry out the following steps.

 1. Copy default.settings.php to settings.php
 1. Create a user and database for this project.
 1. Edit settings.php and update the mysql url at around line 92
 1. Import the SQL file in site from the folder sites/default/files/
 1. If you have no databse you need to create the structure first

If you want to have your settings file check into the repository then follow
the instructions above. When done move the settings file to a different file
and symlink it back to be settings.php.  Execute the following in the sites
default directory:

    mv settings.php settings.`uname -n`.php && ln -s settings.`uname -n`.php settings.php

### .htaccess

The .htaccess file is also removed fron the check in.  Either create a sym link
to or copy the htaccess.original to .htaccess in the root folder.  In the site root folder excute:

   cp htaccess.original htaccess.`uname -n` && ln -s htaccess.`uname -n` .htaccess

Now edit the new htaccess file (.htaccess) to reflect any customplatform 
settings.

### Admin details

Admin log can be founs in the atrium:

http://atrium.neontribe.co.uk/neontribe/node/665
