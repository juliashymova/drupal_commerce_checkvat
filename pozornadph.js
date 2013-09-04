(function($) {
	$(document).ready(function(){
		$('#pozornadph-table tr td:nth-child(4)').find(':checkbox').each(function() {
			if($(this).is(':checked')) {
				//$(this).parents('td').prev().css("background-color", "red");
				$(this).parents('td').prev().find(':checkbox').attr('checked','checked');
				 $(this).parents('td').prev().find(':checkbox').attr('disabled','true');
			}
		});
			
		
		$('#pozornadph-table tr td:nth-child(4)').find(':checkbox').click( function() {
			   if($(this).is(':checked')) {
				   $(this).parents('td').prev().find(':checkbox').attr('checked','checked');
				   $(this).parents('td').prev().find(':checkbox').attr('disabled','true');
			   } else if (! $(this).is('checked')) {
				   $(this).parents('td').prev().find(':checkbox').removeAttr('disabled');
			   }
			});
		
	});
})(jQuery);
