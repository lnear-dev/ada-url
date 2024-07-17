/* ada_url extension for PHP */

#ifndef PHP_ADA_URL_H
# define PHP_ADA_URL_H

extern zend_module_entry ada_url_module_entry;
# define phpext_ada_url_ptr &ada_url_module_entry

# define PHP_ADA_URL_VERSION "0.2.0"

# if defined(ZTS) && defined(COMPILE_DL_ADA_URL)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_ADA_URL_H */
