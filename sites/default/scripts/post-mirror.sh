#!/bin/bash

drush -y -r /var/home/apps4good/Apps-for-good/ vdel googlemap_api_key
# drush -y -r /var/home/apps4good/Apps-for-good/ vset googlemap_api_key ABQIAAAAtj89T_NXsiHTpBwbcm-4shTzEUyo-xKb5XcS4TGG75k6caIL2BTfobJFq3niAO6-6vgJzT6YrWUqoQ
drush -y -r /var/home/apps4good/Apps-for-good/ vset googlemap_api_key ABQIAAAAtj89T_NXsiHTpBwbcm-4shTjUpsI597P8rG9brluph4KWcRHXBRoeLNCrE8ynu0ztVM5aYhY0JC_Kg
drush -r /var/home/apps4good/Apps-for-good/ vget googlemap_api_key
