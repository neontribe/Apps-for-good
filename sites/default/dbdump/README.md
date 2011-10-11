## Dumping the database

The contents of the current.sql shuld be an ordered and filtered dump.  Use this command to dump the db before checking in.

    drush sql-dump --skip-tables-key=common --result-file=sites/default/dbdump/current.sql --ordered-dump

This can be restored into an existing instance using

    drush sqlq 'source sites/default/dbdump/current.sql'

If you have no existing DB then you will first need to set up the structure in the db:

    drush sqlq 'source sites/default/dbdump/structure.sql'
