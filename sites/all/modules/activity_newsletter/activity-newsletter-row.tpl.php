<?php
	$time = date('c', $timestamp);
	echo "$title at $url was $operation at $time by $by";
	if(!empty($teaser)) {
		echo ":\n\n\t$teaser";
	} else {
		echo ".";
	}
