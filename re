<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <title>Redirecting...</title>
  <script>
    const params = new URLSearchParams(window.location.search);
    const id = params.get("id");

    if (id) {
      const fullURL = `https://1024terabox.com/s/${id}`;
      const encodedURL = encodeURIComponent(fullURL);
      const redirectTo = `https://api.ronnieverse.site/get_m3u8_stream_fast/${encodedURL}`;
      window.location.href = redirectTo;
    } else {
      document.write("❌ Missing ?id= parameter");
    }
  </script>
</head>
<body>
  <p>Redirecting...</p>
</body>
</html>
