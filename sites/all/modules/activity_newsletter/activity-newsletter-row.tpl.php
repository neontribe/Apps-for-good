<?php
	$time = date('c', $timestamp);
	$link = url("node/$node->nid", array('absolute' => TRUE));
	echo "$title at $link was $operation at $time by $by";
	if(!empty($node->teaser)) {
		echo ":\n\n\t$node->teaser";
	} else {
		echo ".";
	}
