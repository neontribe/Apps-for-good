Drupal.behaviors.ntforms = function (context) { 
  $('#edit-title').change(function() {
    var rawname = $('#edit-title').val();
    var newname = rawname.replace(/[^a-zA-Z0-9]/g, '-').toLowerCase();
    console.log(newname);
    $('#edit-purl-value').val(newname);
  });
}

// $('#edit-title').trigger('change');
