Drupal.behaviors.ntforms = function (context) { 
  $('#edit-title').change(function() {
    var rawname = $('#edit-title').val();
    var newname = rawname.replace(/[^a-zA-Z0-9]/g, '-');
    console.log(newname);
    $('#edit-purl-value').val(newname);
  });
}
