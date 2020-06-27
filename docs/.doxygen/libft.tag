<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="file">
    <name>libft.h</name>
    <path>/Users/almayor/Documents/programming/42/libft/</path>
    <filename>libft_8h</filename>
    <class kind="struct">s_list</class>
    <member kind="function">
      <type>int</type>
      <name>ft_abs</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a163185d27fa8ec91746327e1666b4ceb</anchor>
      <arglist>(int a)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_atoi</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>afad2ec371b4188602da9a94db687cb16</anchor>
      <arglist>(const char *str)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_bzero</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a5937ab0d08e31d0e3e4a16ec71e293a1</anchor>
      <arglist>(void *s, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_calloc</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a6747f1fa402c0eb1dde5b99d3cdc900f</anchor>
      <arglist>(size_t count, size_t size)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_isalnum</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a9c2c3821ea43ebdf97de07b123503f8b</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_isalpha</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ac283963beaa3b8c7d09b78851cda297e</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_isascii</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>abf60ddbec6479540e81f3648cf71f1f4</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_isdigit</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a2cf15b8a1a277d1e2ce3654101a2003d</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_isprint</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>abcdba69692f21146aeea5b3d59b7d0ca</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_isspace</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a76cd21d0fd288012f02809cba504f650</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_itoa</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ae5e08fbfd5d8129c2bf3a6c42fc7734c</anchor>
      <arglist>(int n)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_lstadd</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a33f960eac39498ffb3a80129d1f8cf2f</anchor>
      <arglist>(t_list **alst, t_list *new)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_lstappend</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a7190481fce0d99322a5a85ad87ef4109</anchor>
      <arglist>(t_list **alst, t_list *new)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_lstdel</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a7df173f7d91aca457b6f3fcce7169911</anchor>
      <arglist>(t_list **alst, void(*del)(void *, size_t))</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_lstdelone</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a8dece7305a1dd0daff7c66f975c95b86</anchor>
      <arglist>(t_list **alst, void(*del)(void *, size_t))</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_lstiter</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aa240d9afffc91e32a111fc3185e8ed5f</anchor>
      <arglist>(t_list *lst, void(*f)(t_list *elem))</arglist>
    </member>
    <member kind="function">
      <type>t_list *</type>
      <name>ft_lstlast</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a398b40d6bb7fac59e8869daff5d99f8d</anchor>
      <arglist>(t_list *head)</arglist>
    </member>
    <member kind="function">
      <type>t_list *</type>
      <name>ft_lstmap</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a4d5b0bb067dc6d891ab58e600a20d574</anchor>
      <arglist>(t_list *lst, t_list *(*f)(t_list *elem))</arglist>
    </member>
    <member kind="function">
      <type>t_list *</type>
      <name>ft_lstnew</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>afd651852e67ebf82ee7d23ed19595bfb</anchor>
      <arglist>(void const *content, size_t content_size)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_max</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aa468cba11bacd87446892eb6cdfeeb03</anchor>
      <arglist>(int a, int b)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_memalloc</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a5d526be072b01f6b566142e40540783f</anchor>
      <arglist>(size_t size)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_memccpy</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ac89d5c134c6c521ca9a6611fe2e69e82</anchor>
      <arglist>(void *dst, const void *src, int c, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_memchr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a1c5cab6df8df9875c6eddb2b36badae5</anchor>
      <arglist>(const void *s, int c, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_memcmp</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a08f665a1828c402f2ffe2e2187f135fc</anchor>
      <arglist>(const void *s1, const void *s2, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_memcpy</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a28cfd23975baf37693e3ddc17815b9ce</anchor>
      <arglist>(void *dst, const void *src, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_memdel</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ac653d8c9eb3f1d6809309a15e1661083</anchor>
      <arglist>(void **ap)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_memmove</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a56ed5b430b1a92a8b208ff39d7f18a53</anchor>
      <arglist>(void *dst, const void *src, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>void *</type>
      <name>ft_memset</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ac340ddbfddbbf2c8de3c36f0f28c336d</anchor>
      <arglist>(void *b, int c, size_t len)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_min</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ab3702e95ac61d3784ebcb4be203dcc1f</anchor>
      <arglist>(int a, int b)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_power</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a703a56b6871e915b68e8e599974cdd6c</anchor>
      <arglist>(int num, unsigned int exponent)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putchar</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ad5be1665b379489304b89bdc6381d1eb</anchor>
      <arglist>(char c)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putchar_fd</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a8ee15a511946c1397bd2bdea4aed6aee</anchor>
      <arglist>(char c, int fd)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putendl</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>afa7abbd1ae4d5575a969bcedbbba988f</anchor>
      <arglist>(char const *s)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putendl_fd</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a1c8aac84262f05aa9d1afbd2d29982a8</anchor>
      <arglist>(char const *s, int fd)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putnbr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a87581d7de24092f5933487774929cda5</anchor>
      <arglist>(int n)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putnbr_fd</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a63cc0aec12256d125d3f85e472280972</anchor>
      <arglist>(int n, int fd)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putnstr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ab5d7a7dd97ae351629d02078aecfdc99</anchor>
      <arglist>(char *s, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putnstr_fd</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ae347c99d5737ca36036a1ca0050ec3a6</anchor>
      <arglist>(char *s, size_t n, int fd)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_puts</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a5819e66625978bace42f6607ccf0540a</anchor>
      <arglist>(char const *s)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putstr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>af059881fce329f6d9b5ff7a28ef2fd25</anchor>
      <arglist>(char const *s)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_putstr_fd</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a410faf134ffc2ca8180d5351a2b6c309</anchor>
      <arglist>(char const *s, int fd)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_sqrt</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a7d3e1799eba7f1d8d1e8b70d503c2ce5</anchor>
      <arglist>(int num)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strcapitalize</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ac1ab6ad3f206c62e158b2777db308b6b</anchor>
      <arglist>(const char *str)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strcat</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a79a0df5560baf2d0c04a3d71eb9a02a4</anchor>
      <arglist>(char *s1, const char *s2)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_strcchr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ab38bd4d8649c65fe1c594c09ddb3dec2</anchor>
      <arglist>(char const *str, char c)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strchr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a8d986b0243eb93d15d9361e341877688</anchor>
      <arglist>(const char *s, int c)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_strclr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a2358bc81af46e39bcab5f0a056e251bd</anchor>
      <arglist>(char *s)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_strcmp</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a1f2ff2312e5994560c9537cd9173be94</anchor>
      <arglist>(const char *s1, const char *s2)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strcpy</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a46f4d59711185b0c44cab66dd7a08488</anchor>
      <arglist>(char *dst, const char *src)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_strdel</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>abc617b3f7fb8f3b6b0a557a70b90bb61</anchor>
      <arglist>(char **as)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strdup</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aada5f5ba69c0c2c97a1322b4e2554709</anchor>
      <arglist>(const char *s1)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_strequ</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>acd9021150ef93f3e8018dd571cef44bc</anchor>
      <arglist>(const char *s1, const char *s2)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_strintab</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a90fa96afea2e65ddafcac3a598ae73f7</anchor>
      <arglist>(const char *str, char *const tab[])</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_striter</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aefb762dee5fc8d5578a3647d520b9a0f</anchor>
      <arglist>(char *s, void(*f)(char *))</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>ft_striteri</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ada722cffd2c6c8169ae339afd0f9763c</anchor>
      <arglist>(char *s, void(*f)(unsigned int, char *))</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strjoin</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a124b6172bd4d81c0d8ad842a277db19a</anchor>
      <arglist>(const char *s1, const char *s2)</arglist>
    </member>
    <member kind="function">
      <type>char</type>
      <name>ft_strlast</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aa2c944602b1a14ea30e6766c7070b875</anchor>
      <arglist>(char const *str)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>ft_strlcat</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a7531453313e0cbfde6fe51662c9c3208</anchor>
      <arglist>(char *dst, const char *src, size_t dstsize)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>ft_strlcpy</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a8ea1d78f6dc1172375fa859895e3d67f</anchor>
      <arglist>(char *dst, const char *src, size_t maxlen)</arglist>
    </member>
    <member kind="function">
      <type>size_t</type>
      <name>ft_strlen</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>abbb8c6c4ed85d892e7f1509f65f5768a</anchor>
      <arglist>(const char *s)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strmap</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a3e7c902a317a582025adb6ed48322838</anchor>
      <arglist>(char const *s, char(*f)(char))</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strmapi</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ad9c0488c57afc864b87fbb0bc604db82</anchor>
      <arglist>(char const *s, char(*f)(unsigned int, char))</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strncat</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a8af9f183507518e04189f852972f4ae1</anchor>
      <arglist>(char *s1, const char *s2, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_strncmp</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a9d2fe792187aa4ed08e5864fb2c4d6dc</anchor>
      <arglist>(const char *s1, const char *s2, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strncpy</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a0a1134108bea167b4a4d0fa7f7d359d0</anchor>
      <arglist>(char *dst, const char *src, size_t len)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strndup</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>af03d97e198c9026fa1506b22cc0b013f</anchor>
      <arglist>(const char *s1, size_t len)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_strnequ</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a44390aa3d7e9321348dcb259195fa307</anchor>
      <arglist>(char const *s1, char const *s2, size_t n)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strnew</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a75a803747e7ff7d15a9d1faefe45a92b</anchor>
      <arglist>(size_t size)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strnstr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ae813b6571722b89567f28fd3f6f04d10</anchor>
      <arglist>(const char *haystack, const char *needle, size_t len)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strrchr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a0474d24bfb12ac7f698f9293ebd163ff</anchor>
      <arglist>(const char *s, int c)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strrev</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a0699e173f59b0269eda53b0f8f823182</anchor>
      <arglist>(const char *s)</arglist>
    </member>
    <member kind="function">
      <type>char **</type>
      <name>ft_strsplit</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a62475b3b1de62355bf4664dd337e8324</anchor>
      <arglist>(char const *str, char delim)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strstr</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aa9f039f05884ee9680c47a013b71d6a1</anchor>
      <arglist>(const char *haystack, const char *needle)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strsub</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>a87994ca583339cbfe4ec3ebde8396850</anchor>
      <arglist>(char const *s, unsigned int start, size_t len)</arglist>
    </member>
    <member kind="function">
      <type>char *</type>
      <name>ft_strtrim</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ad0fc87f40edbf3502c1cf878c9a85e7e</anchor>
      <arglist>(char const *s)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_tolower</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>ab86e5297914753b6c82d7e3c3020ce17</anchor>
      <arglist>(int c)</arglist>
    </member>
    <member kind="function">
      <type>int</type>
      <name>ft_toupper</name>
      <anchorfile>libft_8h.html</anchorfile>
      <anchor>aef116be7b5bceafff4b59f20a4433d12</anchor>
      <arglist>(int c)</arglist>
    </member>
  </compound>
  <compound kind="struct">
    <name>s_list</name>
    <filename>structs__list.html</filename>
    <member kind="variable">
      <type>void *</type>
      <name>content</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>a5e7bcb97789f4440937bf7d76969bab3</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>size_t</type>
      <name>content_size</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>a5118e3c8c065287667e21c0802cdec14</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable">
      <type>struct s_list *</type>
      <name>next</name>
      <anchorfile>structs__list.html</anchorfile>
      <anchor>a06a0f2db4e8b126a362bbfa366c0ab09</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="page">
    <name>md_README</name>
    <title>libft</title>
    <filename>md__r_e_a_d_m_e</filename>
    <docanchor file="md__r_e_a_d_m_e" title="Overview">autotoc_md1</docanchor>
    <docanchor file="md__r_e_a_d_m_e" title="Acknowledgements">autotoc_md2</docanchor>
  </compound>
</tagfile>
