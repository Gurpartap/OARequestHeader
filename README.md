OARequestHeader
===============

A quickie to generate OAuth headers when using OAuthConsumer library in Mac and iPhone applications. OARequestHeaders provides a NSString of generated request headers to be used to HTTP requests (for example with ASIHTTPRequest, etc.)

Example Usage
-----

This is how OARequestHeader is implemented in GSTwitPicEngine - (http://github.com/Gurpartap/GSTwitPicEngine):

<pre>
OAConsumer *consumer = [[[OAConsumer alloc] initWithKey:TWITTER_OAUTH_CONSUMER_KEY secret:TWITTER_OAUTH_CONSUMER_SECRET] autorelease];

// NSLog(@"consumer: %@", consumer);

OARequestHeader *requestHeader = [[[OARequestHeader alloc] initWithProvider:@"https://api.twitter.com/1/account/verify_credentials.json"
                                                                     method:@"GET"
                                                                   consumer:consumer
                                                                      token:_accessToken
                                                                      realm:@"http://api.twitter.com/"] autorelease];
                                                                      
NSString *oauthHeaders = [requestHeader generateRequestHeaders];

NSLog(@"requestHeaders: %@", requestHeaders);

// Set your request's headers to oauthHeaders.

</pre>

Contact
-------

Find me on Twitter: http://twitter.com/Gurpartap
Or use the form at http://gurpartap.com/contact to talk privately (ooooh!!).

License
-------

Copyright (c) 2010 Gurpartap Singh, http://gurpartap.com/

This code is licensed under the MIT License

You are free:

 * to Share — to copy, distribute and transmit the work
 * to Remix — to adapt the work

Under the following conditions:

 * The copyright notice and license shall be included in all copies or substantial portions of the software.
 * Any of the above conditions can be waived if you get permission from the copyright holder.

See bundled MIT-LICENSE.txt file for detailed license terms.
