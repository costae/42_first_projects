function fun()
{
    if (document.cookies)
    {
        var getCookies = function()
        {
            var pairs = document.cookie.split(";");
            var cookies = {};
            for (var i=0; i<pairs.length; i++){
                var pair = pairs[i].split("=");
                cookies[pair[0]] = unescape(pair[1]);
            }
            return cookies;
        }
        var cookies = getCookies();
        if (cookies)
        {
            for (n in cookies)
            {
                alert('dagfh k');
                var elem = document.createElement('div');
                elem.class = 'todo';
                elem.innerHTML = cookies[n];
                document.getElementById('ft_list').prepend(elem);
            }
        }
    }

	document.getElementById('b').addEventListener('click', function ()
	{
    	var person = prompt("New todo", "");
    	var elem = document.createElement('div');
        elem.class = 'todo';
    	elem.innerHTML = person;
        setCookie('todo', person, 1000);
    	elem.addEventListener('click', function ()
    	{
    		if (confirm('Delete me'))
            {
                setCookie('todo', elem, -1);
                document.getElementById('ft_list').removeChild(elem);
            }
    	});
    	document.getElementById('ft_list').prepend(elem);
	});
}

function setCookie(cname, cvalue, exdays) {
    var d = new Date();
    d.setTime(d.getTime() + (exdays * 24 * 60 * 60 * 1000));
    var expires = "expires="+d.toUTCString();
    document.cookie = cname + "=" + cvalue + ";" + expires + ";path=/";
}
