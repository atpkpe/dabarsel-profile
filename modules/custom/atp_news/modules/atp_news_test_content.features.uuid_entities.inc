<?php
/**
 * @file
 * atp_news_test_content.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function atp_news_test_content_uuid_default_entities() {
  $entities = array();

  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/2e6b9942-1fa0-49bb-8741-51c7ed1d2bc1',
      'cause' => 'node/507dda76-4088-4cf7-8482-611b6f71b4f5',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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OD6EDj9cVBUbz9P6/Q02p+r/AC/4dhRRRVmYUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFADW60lK3Wkq1sff5Z/ulP0CiiimdwUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFT2nzSmLtKpTHqf4R/wB9AVBTkdo5FdDhlIIPoRUzV4tIBtFS3SLHdSqgwgY7f93t+lRURfMk0AUUUVQBRRRQA+iiisz8yCiiigCeL5bWd+u7bHj6ndn/AMd/WoKnPy2KY/jlbd74Ax/6EfzqCoh1fn/wDSppyrsvz1/UKKKKszCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAa3WkpW60lWtj7/LP90p+gUUUUzuCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAnufm8mT+/EvHpt+X/ANlz+NQVPJ81lAx6hnQfQYOPzY/nUFZ0/hsCCiiitACiiigB9FFFZn5kFFFFAE8/+ptf+uR/9DaoKnu/9cv/AFyj/wDQBUFRT+FPv+ppV+Nrtp92gUUUVZmFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQA1utJSt1pKtbH3+Wf7pT9AooopncFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBOn/HhN/11T+T1BU9v/qbr/rkP/Q1qCs4by9f0QkFFFFaDCiiigB9FFFZn5kFFFFAE95xdOn/ADzxHn12jbn9Kgqe9/4/rj/rq386gqKfwL0NK38SXqwoooqzMKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigBrdaSlbrSVa2Pv8s/3Sn6BRRRTO4KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigCe2+bzo/wC/E3Ppt+b/ANlx+NQVPaf65v8A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igAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigApT1x6UDrn0pKraJ0fBQ85P8F+jb++P3FFFFSc4UUUUAFFFFAHdUUUV7R+tBRRRQAUUUUAQp+7uXj6K43qPfo39D9SamqG4B8sOoJaNg4A6+4HuRkfjUoIZQykEEZBHeguWquLRRRQQFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAHN+IP+P+P/AK5D+ZrJrW8Qf8f8f/XIfzNZNeVW/iM/Ns2/32p6hRRRWR5wUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUDk0JXKjFyajHdi9B9aSlPJpKctzXESTnyx2Wi+XX5vX5hRRRSMAooooAKKKKAO6ooor2j9aCiiigAooooAKhh/du0B6D5k/3T2/A/kMVNUM4IUSqCWjOcDqR3H+e4FBUddO5NRSAhlDKQQRkEd6WgkKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAOb8Qf8f8f/AFyH8zWTWt4g/wCP+P8A65D+ZrJryq38Rn5tm3++1PUKKKKyPOCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACl6D60g5NKeTVLRXOil7kHU67L9X8l+LQlFFFSc4UUUUAFFFFABRRRQB3VFFFe0frQUUUUAFFFFABRRRQBDH+6maH+EjdGPQdCPw4/PHapqZLH5igA7WBDKfQ/54+hoik82IPjB6EehHBH50FvVcw+iiiggKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA5vxB/x/x/8AXIfzNZNa3iD/AI/4/wDrkP5msmvKrfxGfm2bf77U9QooorI84KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAoopRQlcuEHOSig6D60lB5NFNvsXWmpPljstF/n89/LboFFFFIxCiiigAooooAKKKKAO6ooor2j9aCiiigAooooAKKKKACoX/AHMvm/wNxJ6L/tf0P4elTUUDTsFFQxfuSITwvSI+2On1H8vXmpqAaswooooEFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBzfiD/AI/4/wDrkP5msmtbxB/x/wAf/XIfzNZNeVW/iM/Ns2/32p6hRRRWR5wUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABSn0o6D3pKrZHQ/3UOX7T38l29X18rd2goooqTnCiiigAooooAKKKKACiiigDuqKKK9o/WgooooAKKKKACiiigAooooAbJGJFwcgg5DDqD6imxSFgVfAkU4IH6H6H/63apKjljLFXTAdDkZ6H1B9v8AAelBSd9GSUU2OQSLkZBBwVPUH0NOoE1YKKKKBBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBzfiD/AI/4/wDrkP5msmtbxB/x/wAf/XIfzNZNeVW/iM/Ns2/32p6hRRRWR5wUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFKPU0gFBOapaas3glCPtJfJfr6L8Xp0YUUUVJi25O73CiiigQUUUUAFFFFABRRRQAUUUUAd1RRRXtH60FFFFABRRRQAUUUUAFFFFABRRRQBFIjBhLGMsPvD+8PT+o/pk09HV1DKcg06onRkYyRjJP3l/vf8A1/8A9XoQFb6MlopqOrqGU5Bp1BIUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAc34g/wCP+P8A65D+ZrJrW8Qf8f8AH/1yH8zWTXlVv4jPzbNv99qeoUUUVkecFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFHWjrSn0HSml1ZtCCS557fmB/SkoopN3InNzk5MKKKKCAooooAKKKKACiiigAooooAKKKKAO6ooor2j9aCiiigAooooAKKKKACiiigAooooAKKKKAIniIYyRnD9wTw31/wAev8qfHIJFyMgg4KnqD6GnVHJEGbepKyAcMP6juP8AHtQVe+jJKKjjlLNsdSjgZwTnI9Qe4qSgTVgooooEFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBzfiD/AI/4/wDrkP5msmtbxB/x/wAf/XIfzNZNeVW/iM/Ns2/32p6hRRRWR5wUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABQBS47mkJzVWtqzdQjBc1T5L/PsvxfS24pP5UlFFS3cznOU3eTCiiiggKKKKACiiigAooooAKKKKACiiigAooooA7qiiivaP1oKKKKACiiigAooooAKKKKACiiigAooooAKKKKAGyRrIuGB4OQQSCPoRUfmNDxNynaQf+zDt9en0qaigpPowoqHy2h5h5TvGf8A2U9vp0+lPjlWTIAKsOqsMEf59elAOPVD6KKKCQooooAKKKKACiiigAooooAKKKKACiiigAooooA5vxB/x/x/9ch/M1k1reIP+P8Aj/65D+ZrJryq38Rn5tm3++1PUKKKKyPOCiiigAooooAKKKKACiiigAooooAKKKKACiilxQlcuEJTdooSl6fWjPpSVWiNbwpfDrLv0Xp3fnt5PRhRRRUmDbk7vcKKKKBBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB3VFFFe0frQUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABTJIlkwSMMv3WHVfpT6KBptaoh3yw/6weYn95Qdw+oHX6j8qkR1kUMjBlPQg5FOqJ4FZi6kxyHqycE/XsfxoKunuS0VD5ksX+tTcv8AfjBP5r1/LP4VIjrIoZGDKehByKBOLWo6iiigkKKKKACiiigAooooAKKKKACiiigDm/EH/H/H/wBch/M1k1reIP8Aj/j/AOuQ/maya8qt/EZ+bZt/vtT1CiiisjzgooooAKKKKACiiigAooooAKKKMZotcqMXJ8sVdhRjNLwPegnNVZLc29lCH8R69l+r2X4vyDge9ITmiik30JnWclyx0XZfr3+e3SwUUUUjEKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA7qiiivaP1oKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACont42YuBtkP8a8N/wDX+h4qWigabWxDmePqBMvt8rf4H9KBcxFgrExsTgK425PoPX8M1NSEBlKsAQRgg96CuZPdC0VD9mVf9XJJH/utkAegByB+Ao3XCfeRJR6p8p/I8frQHKnsyaioftSL/rA8XrvXgf8AAun61IjrIoZGDKehByKBOLW46iiigkKKKKACiiigDm/EH/H/AB/9ch/M1k1reIP+P+P/AK5D+ZrJryq38Rn5tm3++1PUKKKKyPOCiiigAoooxnpRa5UYuT5Yq7Cilx6kCjge9VyvqbfVpr47R9d/u3/ASlwe/H1oz6cUlHuoP3EO8n9y/Vtf+Av9F4HvQSTSUUuZiliJtcsdF2Wn39X87hRRRSMAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAO6ooor2j9aCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAqJ7aF2LtEhc/xY+b8+tFFA02thPs+3/VzTJ6/Nuz/31mjZcDhZ0I9Xjyf0IH6UUUFc7Dddf88Yf+/p/wDiapf25a/885vyH+NFFVY6/Yw7Fmzvor3f5auNmM7gO/8A+qrVFFSzlqxUZNI5vxB/x/x/9ch/M1k0UV5Vb+Iz8yzb/fanqOClhkUbCOciiitIU4uKbR62Dy7DVKEZzjq13f8AmJx6n8qMj0/OiioqJQehxZjThhJRjRikn3Sf53DPsKCSepoorLmfc8yWJrSXK5O3bp92wlFFFIwCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA//2Q==',
    'filemime' => 'image/jpeg',
    'filename' => 'imagefield_W3UalV.jpeg',
    'filesize' => 11317,
    'metadata' => array(
      'height' => 518,
      'width' => 583,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_W3UalV.jpeg',
    'uuid' => '2e6b9942-1fa0-49bb-8741-51c7ed1d2bc1',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/507dda76-4088-4cf7-8482-611b6f71b4f5',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Abico gravis nisl os vulputate wisi. Eum gemino importunus melior pneum proprius quae ratis singularis. Haero mos quia saepius ut zelus. Autem iusto luctus olim paulatim tamen. Abigo elit inhibeo meus nunc os refoveo velit. Bene dignissim humo ideo letalis paulatim si similis ulciscor verto.

Consectetuer euismod jus. Dolor gilvus interdico mauris mos olim tamen verto vindico. Decet erat ex jugis paratus saluto suscipit torqueo vulputate.

Camur inhibeo metuo pala persto quadrum voco vulpes. Abluo accumsan autem occuro premo quidne turpis. Abico at diam huic interdico lenis nulla persto refero ulciscor. Duis ex hendrerit nulla probo suscipit te turpis. Exerci plaga sino turpis wisi. Euismod iriure pertineo sed. Brevitas eu genitus ibidem luctus nutus ulciscor. Letalis paulatim suscipit. Iaceo incassum jus magna oppeto pertineo pneum saluto uxor.

Facilisi huic iustum mos similis suscipit. Abdo consequat eu huic ludus pertineo qui uxor. Adipiscing at causa conventio eu gilvus laoreet natu secundum suscipere. Ad facilisi genitus molior pagus pneum praesent vereor. Commodo interdico probo quia secundum tation uxor. Commodo lenis mauris melior obruo persto pneum typicus. Commoveo nisl sudo.

Caecus imputo nulla tego. Comis haero in jugis paratus paulatim saepius typicus vereor. Et gilvus imputo natu ullamcorper valetudo. Aliquam imputo iriure ludus roto saepius sit turpis vereor. Abluo acsi aptent eligo facilisis importunus neque olim persto utinam.

Comis fere iaceo inhibeo iusto laoreet pala quis saluto tincidunt. Brevitas incassum iustum. Esse meus nutus quidne vulpes. Mos nulla vicis. Distineo nunc pagus paulatim. Facilisis lenis quibus ratis ulciscor utinam valetudo. Causa eligo exputo facilisi iustum neo odio refero tum.

Capto facilisi vulputate. Decet diam ex iaceo neo sit tego. Accumsan appellatio dolus nunc pagus patria tincidunt. Dolus erat iusto scisco valetudo. Comis illum similis tation. Abbas antehabeo cogo metuo nunc typicus wisi. Decet gilvus meus natu plaga quidem usitas ut. Decet jus occuro quia vindico. Duis exerci gemino gravis laoreet molior premo quia virtus.

Bene dignissim exputo ludus quae turpis. Capto iustum neo probo quae ullamcorper. Abico adipiscing autem luptatum roto verto virtus. Abluo aptent consectetuer distineo dolore gemino lobortis odio qui uxor. Erat ibidem praemitto sit vero. Antehabeo dolor eligo magna molior odio sudo zelus. Ad feugiat iusto pecus quidem. Bene camur defui dolus jumentum letalis nulla pagus. Luctus quae refoveo te virtus.

',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => '2e6b9942-1fa0-49bb-8741-51c7ed1d2bc1',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/jpeg',
          'filename' => 'imagefield_W3UalV.jpeg',
          'filesize' => 11317,
          'height' => 518,
          'metadata' => array(
            'height' => 518,
            'width' => 583,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_W3UalV.jpeg',
          'uuid' => '2e6b9942-1fa0-49bb-8741-51c7ed1d2bc1',
          'width' => 583,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2017-11-26 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Abluo consectetuer iustum pagus roto. Caecus molior nobis quidne. Dolore dolus immitto jus lobortis qui singularis. Abico feugiat gilvus ibidem ymo. Dolor enim haero os patria quadrum saluto tincidunt. Camur erat nulla roto secundum. Bene gemino probo singularis sino ulciscor utrum.

Amet iriure nulla praesent saepius vulputate. Imputo jus refero veniam voco. Incassum mauris molior paulatim proprius. Nulla ratis turpis vulputate. Abico ad aliquam amet aptent causa gilvus iriure sagaciter vereor. Aliquam damnum dolus ideo ille voco volutpat. Esca facilisis lobortis macto os pneum premo usitas uxor. Feugiat jumentum minim saepius vereor. Brevitas causa hendrerit in ludus vero voco.

',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/13',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'ATP Ejendomme investerer 3,2 mia. kr',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ATP Ejendomme investerer 3,2 mia. kr',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 0,
    'uuid' => '507dda76-4088-4cf7-8482-611b6f71b4f5',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/e192a7f9-87f4-4bac-8946-f516e583b360',
      'cause' => 'node/a57462af-195c-4578-88ce-6a39a25cd3f0',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAcQAAACsBAMAAAAXocGvAAAAD1BMVEUqmXCa/L2LQLiToy0tz/ouK8XQAAADn0lEQVR4nO3W3W3qUBAE4DzQABIVIDq4FHDiuP+arpFCsOGc/YGZVYJmX4IQkvfTzEI+Pipn/p7PfeHU8XYL7fL38tTD8vrtiPPcvl9dn1yWZQ1wN99e3559qEmyRPiT4Ja4JFkRZAFwHeEdsSRIvnAT4T2xIki+8P6N+w0ObGO58IFIN5YLH4lsY7mwQyQby4U9ItdYLuwSqUaicNd/u7/H4S8Sdy1D3PP+B+ARB8IRcU+rKk3YP0SDSDtHlnBwiAaRdo4sYssTWVUlCYc1tYikqnKE45paRFJVOcT2HJFTVYrQCtEkUmKkENuzREqMDKEZok1kxMggtueJjBgJQjtEh0iIkUBsrxAJMeKFTogeER8jntheI+JjhAu9EF0iPEY4sb1KhMeIFroh+kR0jCKmp71ORDcVLPRDDBDBMYKJDUEExyhicgI9jRCxTcUSG4aIjVHE3ER6GiJCmwolNhQRGqOIqQn1NEZENlXE1DQcEdlUETMT62mQCGyqiJlpSCKwqSImJtjTKBHXVBET07BEXFNFFHE10VMME2HHKKKIq2loIuwYRRTxNuFTjBNRxyiiiLdpeCLqGEUUUcS3Isa/UBNE0FeqiCKKKKKIv4zYGETQD6OIIooooogixolHyEzxj/6Lz1fis+MRUUQRRRRRRBHhxBODeIYIRRRRRBFF/G3ExA9jfDfMz6KIIor4ZsT4V2p4NdAXqogirmeCE0GnKKKI6wkfY3Qz1CmKKOJmJjARdYoiiriZ6DEGF4OdooipmaBEWE9FTE2wqbG9cD0VMTcTkIjrqYi5iTU1tBawpyImZ4IRgT0VMTmhpka2QvYUSwzFGNkKGaKI2Yk0NbAUtKdgYiTGwFLQEEVMT6Cp/k7YnqKJgRj9nbAhwol+jO5K4BBFfGKml4ngnuKJbozeRugQ8UQ3Rm8jdIgEohejsxA8RALRi9FZCB4ig+jEaO+DD5FBdGK098GHSCHaMZrrEEKkEO0YzXUIIXKIZozWNowQOUQzRmsbRogkohWjsQwlRBLxOD9DPFNCZBGNqo534QhpxHFVh6twasojjqs6FJJC5BGHVR1twhISiaeBcbDIzBISiaNz7O/BOkQucXCOfSGtplxi31gt5BK7xmohmdgzVgvZxI6xWkgnPhqrhXzicZ5M4swWFhCPp22Qm8efeb/4lcS7INdP50dYRdwEeXt2RYRlxCXInySvT55LIiwkXpKc5yvxvLyu8S3zH0BbShQc2b6YAAAAAElFTkSuQmCC',
    'filemime' => 'image/png',
    'filename' => 'imagefield_QFtXus.png',
    'filesize' => 1011,
    'metadata' => array(
      'height' => 172,
      'width' => 452,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_QFtXus.png',
    'uuid' => 'e192a7f9-87f4-4bac-8946-f516e583b360',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a57462af-195c-4578-88ce-6a39a25cd3f0',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Decet eros jumentum loquor magna meus paratus populus refero. Appellatio ea iustum macto quidne refero tego utrum voco.

Dolore gemino gilvus iusto luctus sagaciter tego usitas virtus. Esca eum fere iustum jumentum meus odio populus utrum. Imputo meus molior nobis pala pecus si tincidunt. Capto dolor hendrerit populus quidne quis similis virtus wisi. Damnum ea euismod facilisi immitto laoreet saepius. Aliquam decet iustum laoreet oppeto. Abbas adipiscing dignissim nobis oppeto roto si sit suscipit utrum.

Damnum facilisis feugiat hos vereor verto. Et oppeto saluto. Commodo consequat haero ille melior refoveo roto sudo. Causa gravis iaceo jus odio rusticus suscipit tego tincidunt. Consectetuer pneum refero. Abdo interdico lenis. Abico appellatio capto causa eligo facilisi modo pala tum. Abdo appellatio cogo gilvus iaceo minim refero si. Illum loquor melior saluto te tincidunt torqueo utinam volutpat.

Ibidem importunus lenis modo natu pertineo pneum singularis torqueo. Antehabeo comis ludus mos nisl os. Abico abluo dolor loquor luptatum minim pertineo quibus valde. In premo ymo. Melior pecus praemitto venio. Illum lucidus nostrud similis turpis typicus virtus. Commodo dolus gravis jugis metuo valde. Aptent causa cogo exerci feugiat ille praesent ut valetudo wisi. Causa et magna molior nostrud paulatim proprius quibus vindico ymo.

Ideo nunc patria tum ut. Abico augue brevitas ideo macto natu sudo wisi. Aliquam lenis pagus. Acsi damnum eum gemino sagaciter voco. Meus paulatim usitas utrum. Augue camur causa elit esca te usitas utrum. Blandit genitus hos premo. Bene ex genitus laoreet metuo quidem secundum.

Esca persto verto ymo. Abigo diam dolus lucidus minim nisl tation zelus. Exputo immitto jugis occuro pertineo qui quidne. Capto comis damnum gilvus nobis pala plaga si usitas. Abigo diam gemino importunus probo sagaciter si sudo vulpes. Cui distineo exputo lenis lobortis minim.

',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => 'e192a7f9-87f4-4bac-8946-f516e583b360',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/png',
          'filename' => 'imagefield_QFtXus.png',
          'filesize' => 1011,
          'height' => 172,
          'metadata' => array(
            'height' => 172,
            'width' => 452,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_QFtXus.png',
          'uuid' => 'e192a7f9-87f4-4bac-8946-f516e583b360',
          'width' => 452,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2017-06-13 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Ea hos iaceo ideo ille lucidus quadrum refoveo tego. Damnum esca haero hos refoveo roto saluto suscipere utrum. Abigo consectetuer euismod ideo. Immitto minim quibus. Aliquip conventio damnum jugis meus natu pagus singularis ut. Consectetuer decet ex meus natu neo quibus tation vereor. Abdo amet exputo patria probo qui suscipit ullamcorper. At brevitas iaceo nimis quia quis refero turpis zelus. Abdo abluo gemino odio premo usitas uxor. Abdo consectetuer cui euismod in jus saluto. Abbas diam facilisi humo letalis macto nibh nutus rusticus. Dolor ea importunus ludus saluto suscipere ullamcorper. Consectetuer lenis magna nisl obruo roto te. Commodo esse iaceo torqueo usitas. Accumsan molior oppeto quia ut uxor. Appellatio haero ille immitto nulla. Ille neque paulatim. Huic iustum te. Eum facilisis iaceo neo venio. Dolor facilisi ibidem loquor suscipit. Abbas camur jumentum nisl occuro pertineo saepius sed si zelus. Blandit camur defui eu iaceo ludus plaga sed. Brevitas gilvus haero interdico nimis occuro saluto sino utrum vero. Acsi elit esca incassum occuro pecus turpis voco wisi. At erat eum lucidus paratus. Facilisi pala pecus valde. Commodo ille interdico singularis. Gemino jumentum refero. Acsi appellatio causa dignissim incassum jugis nutus sit tamen venio. Eu facilisi ludus minim occuro. Exerci fere gemino iusto. Abico cui importunus iriure occuro quia valde velit wisi. Defui erat patria ut. Obruo pagus populus tamen. Camur fere feugiat importunus probo ymo. Bene cui eu gemino in nisl praesent sudo tamen. Augue ideo interdico. Aliquam bene distineo esse hos loquor olim quidem usitas valde. Ad causa dolore meus pertineo premo quibus rusticus suscipere. Damnum magna os quibus. Luctus populus singularis typicus venio verto. Exerci loquor modo olim pecus saepius sudo utrum venio vindico. Ideo laoreet oppeto te. Dignissim gemino natu praesent quae vero. Dignissim facilisis laoreet modo tincidunt. Accumsan dolus elit exerci iusto iustum lobortis quis. Abbas autem cui olim persto ymo. Acsi feugiat metuo pertineo sit typicus ulciscor veniam. Abbas amet aptent gemino iustum sed. Macto pala paulatim vulputate. Melior pagus praesent tation valde velit verto ymo. Acsi dolor iriure pagus tum. Abbas incassum os pneum quidem singularis te. Appellatio brevitas nutus paratus persto tum valetudo. Acsi erat inhibeo lobortis luptatum quibus scisco suscipere tum. Amet augue consequat cui euismod pagus vereor vicis virtus. Adipiscing brevitas diam eligo magna natu roto. Acsi jumentum melior nisl tation torqueo volutpat. Consectetuer ea ex hendrerit jus nunc roto tincidunt torqueo ut. Abico comis jugis meus neque nunc odio. Consectetuer ea exputo fere probo sagaciter tamen tation ut. Incassum melior roto ut. Defui nisl qui. Ad adipiscing conventio elit exputo nibh quibus te.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/12',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 1,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Nye medlemmer i ATP’s bestyrelse',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nye medlemmer i ATP’s bestyrelse',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 1,
    'uuid' => 'a57462af-195c-4578-88ce-6a39a25cd3f0',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/8e76d8fc-a016-4787-af3a-14bc8016361a',
      'cause' => 'node/20978180-5edb-4a64-ba31-a7107768262d',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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',
    'filemime' => 'image/gif',
    'filename' => 'imagefield_gTO85w.gif',
    'filesize' => 1915,
    'metadata' => array(
      'height' => 215,
      'width' => 316,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_gTO85w.gif',
    'uuid' => '8e76d8fc-a016-4787-af3a-14bc8016361a',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/20978180-5edb-4a64-ba31-a7107768262d',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Exputo gravis iusto letalis modo secundum sino valetudo venio ymo. Camur causa illum ludus mauris modo probo rusticus saepius vulputate. Bene elit et gemino haero molior quibus sino validus. Feugiat rusticus valetudo. Ea facilisi hendrerit iaceo imputo nulla oppeto premo validus. Caecus gilvus hendrerit ille nutus ratis saluto utrum vereor. Accumsan ad causa commodo iriure nostrud occuro quia torqueo. Augue ille nobis wisi. Dolus enim jus quae quia vulputate. Capto distineo saepius tincidunt. Causa eligo erat premo quibus. Bene blandit camur gilvus hos importunus iriure jus saluto virtus. Commoveo distineo erat humo iaceo loquor mos neo patria. Dolus esca ludus utinam. Abdo accumsan eligo in jumentum ludus saepius vicis.</p>',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => '8e76d8fc-a016-4787-af3a-14bc8016361a',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/gif',
          'filename' => 'imagefield_gTO85w.gif',
          'filesize' => 1915,
          'height' => 215,
          'metadata' => array(
            'height' => 215,
            'width' => 316,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_gTO85w.gif',
          'uuid' => '8e76d8fc-a016-4787-af3a-14bc8016361a',
          'width' => 316,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2014-10-29 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Letalis modo nimis refoveo veniam. Hos nimis secundum. Abbas aliquam damnum enim feugiat gilvus voco vulputate zelus. Abico appellatio consequat damnum nutus paratus sed torqueo. Dolor ex jumentum laoreet nimis te. Acsi euismod ex gilvus iriure mos zelus. Enim patria similis. Abbas capto dignissim esca usitas validus zelus. Exerci exputo facilisis tego. Mos turpis typicus.

Ille jugis sagaciter velit. Blandit esse jus nostrud quis refoveo suscipit.

Facilisis ibidem immitto nibh odio pagus praemitto premo secundum. Abluo augue iriure metuo neo nunc vulpes ymo. Facilisis ille jumentum modo vulputate. Dignissim imputo pneum refoveo. Abbas augue decet euismod nibh tamen ut.

Duis feugiat iaceo imputo laoreet os. Ad blandit ratis sagaciter ulciscor. Conventio jumentum lobortis. Brevitas cui dignissim. Abigo caecus dolore fere nobis pneum si valde venio. Gemino pneum sit. Amet comis nibh quidne saluto. Eligo iaceo tamen.

Dignissim metuo nimis quadrum ymo. Defui dolor gemino nimis odio populus sagaciter vero. Augue causa jugis suscipere usitas valetudo vindico. Aliquip ludus tincidunt vulputate. Haero lenis mauris nimis quia suscipit torqueo. Dolore gemino lucidus mauris melior nobis nulla pecus praesent.

Dolor nobis pala utinam. Abigo iustum nobis pertineo vicis. Aliquam tego torqueo. Facilisi molior similis. Commoveo eros genitus melior paulatim premo.

Abigo acsi consectetuer defui distineo eum mauris metuo nimis patria. In nulla ulciscor. Dolor importunus in metuo meus occuro os qui similis. Cui quibus quidem. Abluo appellatio dignissim volutpat.

',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/10',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 1,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'ATP fik overskud på 4,3 mia. kr.',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ATP fik overskud på 4,3 mia. kr.',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 1,
    'uuid' => '20978180-5edb-4a64-ba31-a7107768262d',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/f3857dbf-a8b3-48f6-8c4e-2e9f7a2ee9ae',
      'cause' => 'node/98a65bcc-ecac-49c2-86b9-5f6a27d3d19a',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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oqp50n979KPOk/vfpR9Qqd1/XyD/AFtwX8svuX/yRboqp50n979KPOk/vfpR9Qqd1/XyD/W3Bfyy+5f/ACRboqp50n979KPOk/vfpR9Qqd1/XyD/AFtwX8svuX/yRboqp50n979KPOk/vfpR9Qqd1/XyD/W3Bfyy+5f/ACRboqp50n979KPOk/vfpR9Qqd1/XyD/AFtwX8svuX/yRboqp50n979KPOk/vfpR9Qqd1/XyD/W3Bfyy+5f/ACRboqp50n979KPOk/vfpR9Qqd1/XyD/AFtwX8svuX/yRp3v+vX/AK4xf+gLVekv5nFwmG/5YRdv+ma1V86T+9+lCwNRq91/XyMMNxXg4UIQcZaJLZdv8R2lPT7kv+7/AFFMp8X3z/ut/I11S2Piqnwt9tfuGUUUUywooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAIL3/jwuP+uTfyNcdXY3v/Hhcf8AXJv5GuOrelsY1dwooorUyCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAtah/x8p/1wh/9FrVWrWp/wDIVvP+u7/+hGqtTD4URT+BHcU+H/WqP7x2n8eKZSqSrBh1ByK5Wro7Jrmi0hKKdIAsrAdM8fSm0J3HF8yTQUUUUDCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigCC9/48Lj/AK5N/I1x1dje/wDHhcf9cm/ka46t6WxjV3CiiitTIKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACprOFbi9t4XJCySKhI64JxUNWtP+W6MvTykeQN2Vgp2n/vrb9TgVMtEyZu0WQzzNcXEszgBpHLkDpknNR0UVSVhpW0O4ooorjOwfJzsb1Ufpx/SmU88wg/3Wx+f/6jTKSIp7W7f1+QUUUUywooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAgvf8AjwuP+uTfyNcdXY3v/Hhcf9cm/ka46t6WxjV3CiiitTIKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACrUHyWF3J13bIcemTuz/AOOY/GqtWpf3enW8feRmlOO4+6ufcFX/AD9zUy6IifRf13KtFFFUWdxRRRXGdY+Pncn94cfX/PH40ylUlWDDqDkUsgCyHHQ8j6Hml1IWk7d/6/yG0UUUywooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAgvf8AjwuP+uTfyNcdXY3v/Hhcf9cm/ka46t6WxjV3CiiitTIKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAFVWd1RFLMxwABkk1YvmU3TRowaOICJCp4IXjI+py340th8kr3H/PuhkHqG4Cn8GKn6A/SqtTvIjeXoFFFFUWdxRRRXGdYU8/NED/AHTt/PJ/xplOjIDYb7rDBpMma0uug2ilYFWKnqDg0lMpO+qCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigCC9/48Lj/rk38jXHV2N7/wAeFx/1yb+Rrjq3pbGNXcKKKK1MgooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooqW2h+0XCxltqnJZsZ2qBknHfABOKG7aibsrslk/c6dHH1M7eafYLuVfxzvz+HvVWpbmb7RcNIF2qcBVznaoGAM98AAZqKlFaaiirLUKKKKZR3FFFFcZ1hRRRQA9/mUP3PDfX/AD/WmU5CAdrfdPX296RgVYqeoODSWmhEdHyiUUUUywooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigCC9/wCPC4/65N/I1x1dje/8eFx/1yb+Rrjq3pbGNXcKKKK1MgooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAq0n+j2TSdJJ8onqE/iP4/dz6bxUVtD9ouFjLbVOSzYztUDJOO+ACcUXE3nylguyMcRpnIRew/+v3OT3qXq7EPV2IqKKKosKKKKAO4ooorjOsKKKKACnn548/xKOfp2/wA/SmUqsVYMO1DJkr6rdCUU51AwR909P8KbQhp3V0FFFFAwooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAIL3/jwuP8Ark38jXHV2N7/AMeFx/1yb+Rrjq3pbGNXcKKKK1MgooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiirNsqxg3UqgpGfkVhxI+R8v0xyfy4yKTdhN2Qsn+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',
    'filemime' => 'image/jpeg',
    'filename' => 'imagefield_lGMGy4.jpg',
    'filesize' => 8058,
    'metadata' => array(
      'height' => 404,
      'width' => 430,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_lGMGy4.jpg',
    'uuid' => 'f3857dbf-a8b3-48f6-8c4e-2e9f7a2ee9ae',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/98a65bcc-ecac-49c2-86b9-5f6a27d3d19a',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Consequat cui elit gravis illum tincidunt vero. Damnum huic importunus nunc paratus pneum proprius te vero. Consectetuer distineo exputo minim secundum vulputate wisi. Aliquam antehabeo capto esse illum occuro pagus quidne sudo. Capto dolore gilvus ille in macto neo odio tego utinam. Ibidem lobortis pneum. Ideo importunus nimis refero similis suscipere utrum veniam volutpat. Gilvus sudo usitas venio vero. Incassum pneum quibus torqueo. Appellatio dignissim et immitto iustum. Esse os similis. Dolore erat facilisi ratis. Caecus enim et illum loquor patria pertineo praemitto sino. Antehabeo augue decet nutus occuro sagaciter. Blandit commoveo cui gilvus hos importunus nisl odio patria vicis. Modo nunc sudo tation verto. Comis consectetuer macto nobis plaga. Brevitas euismod nobis obruo voco. Imputo loquor metuo oppeto pagus roto sagaciter usitas velit vicis. Ad camur exputo luptatum occuro proprius quidem. Secundum singularis validus. Capto importunus saepius tation. Commoveo eum te. Abico in nulla sagaciter te vindico. Et ideo nibh persto scisco similis vel. Augue damnum erat ex paratus proprius sit ulciscor virtus. Aptent similis typicus. Vereor vero vindico. Ea esse gravis suscipere ulciscor validus. Cui eros jumentum ludus refoveo saluto utinam volutpat. Abico conventio dolor lucidus metuo modo os quia quidem ymo. Abico augue dolore odio paratus quidne refero torqueo vindico. Adipiscing duis humo ideo si. Consectetuer dignissim facilisis immitto iriure praesent quidem veniam voco. Sagaciter tincidunt valde. Humo imputo nunc oppeto premo qui ratis sed typicus utrum. Aptent at augue diam nisl nutus paratus plaga quae valetudo. Euismod gravis immitto nimis nutus plaga refoveo si. Abbas abigo bene consectetuer damnum refero singularis typicus utrum venio. Eligo quadrum utinam. Commodo consequat defui et ex facilisi gravis patria refero si. Antehabeo cui decet et neque nutus quis scisco.</p>',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => 'f3857dbf-a8b3-48f6-8c4e-2e9f7a2ee9ae',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/jpeg',
          'filename' => 'imagefield_lGMGy4.jpg',
          'filesize' => 8058,
          'height' => 404,
          'metadata' => array(
            'height' => 404,
            'width' => 430,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_lGMGy4.jpg',
          'uuid' => 'f3857dbf-a8b3-48f6-8c4e-2e9f7a2ee9ae',
          'width' => 430,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2012-06-15 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Bene inhibeo mauris pertineo. Bene erat luptatum persto premo quidne velit. Camur enim populus quadrum scisco singularis tego. Eum jus luctus neo olim premo tamen tincidunt turpis verto. Accumsan consectetuer sino. Abigo conventio iaceo immitto jugis paulatim similis velit. Elit humo jus occuro pala praemitto. Camur duis genitus iriure macto praemitto utinam volutpat. Accumsan defui gilvus hendrerit iustum odio plaga sagaciter tincidunt vulputate. Causa diam hos melior vulputate. Aliquip camur neque nulla. Esse gilvus imputo loquor secundum vel vindico. Commodo enim esse huic jumentum meus persto. Abico aliquam camur jumentum quis tamen tego volutpat ymo. Abigo molior odio pneum qui velit. Consequat facilisi feugiat in metuo quis saepius scisco zelus. Amet paratus rusticus. Acsi causa comis gilvus illum meus persto populus suscipit vulputate. Brevitas causa huic iustum natu praesent. Abbas molior nostrud saepius turpis vicis virtus wisi. Dolore exerci persto quis secundum. Comis odio usitas. Diam euismod facilisi immitto magna minim saluto velit. Bene ille imputo metuo molior mos tamen veniam voco. Accumsan aliquip blandit esca in rusticus similis utinam. Acsi humo pala praesent scisco. Abigo amet facilisi hendrerit importunus molior mos populus tincidunt. Gilvus lucidus quia sit vereor. Luctus nulla quia velit voco ymo. Comis dolus interdico luctus melior nisl qui ratis. Nutus rusticus tation. Acsi in iustum lenis letalis magna nobis pagus suscipere tation. Aptent erat ludus nostrud validus veniam. Capto et eum tincidunt. Abluo commodo consequat diam occuro pneum probo vereor. Aliquam aptent ille metuo neque quidem saepius tation. Abbas distineo nimis paulatim ratis venio. Aptent iriure suscipit. Acsi amet caecus commoveo consectetuer dolus inhibeo nostrud typicus uxor. Abluo immitto imputo nunc roto rusticus. Et euismod nunc paulatim plaga sudo. Dolus lenis ratis refero venio. Cui gemino huic in mos sagaciter utrum. Ille iriure oppeto rusticus tation te usitas. Capto iustum loquor melior quadrum quidem te vero. Accumsan genitus importunus jugis paratus roto veniam vulputate. Aptent damnum dolore lenis letalis neo obruo quidem vero volutpat. Abbas ea erat tego tincidunt uxor. Loquor metuo neque quidem sed tincidunt wisi. Lobortis natu refero. Os pala praesent. Incassum nisl pagus si. Amet consectetuer exputo inhibeo ludus probo. Acsi bene commoveo gilvus laoreet mauris pagus pecus sagaciter ulciscor. Ibidem lucidus tincidunt. Capto praemitto praesent.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/9',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 1,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Hver tredje pensionist kan have ret til sociale ydelser i fremtiden',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Hver tredje pensionist kan have ret til sociale ydelser i fremtiden',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 0,
    'uuid' => '98a65bcc-ecac-49c2-86b9-5f6a27d3d19a',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/a477c157-dee1-4c33-88db-c3607287aa4f',
      'cause' => 'node/d8667848-1245-4f03-9b7a-4f3b68a82b68',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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/X/PtWU9Gp9vy/r8CX3G0UUVqUFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB638Lf8AkWbn/r8b/wBASu3riPhb/wAizc/9fjf+gJXb1+V5z/v9X1Pkcd/vE/UKKKK8s5AooooAKKKKACiiigAooooAKKKKACiiigAooooAKz9Q/wBIu7Ox6B3+0Of9mJlIA995T8N3Q4rQrP0z/SfN1I/8vWPK9oVzs/PLPyMjfg9KuOmpUdNTQoooqCQooooAKKKKACiiigAooooAKKKKACiiigD5tooor9oPuQooooAKKKKACiiigAooooAKKKKAClBIII6ikopNJqzAcwAOR0PIptOX5ht9en1ptRBte6+hK7BRRRWhQUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAet/C3/AJFm5/6/G/8AQErt64j4W/8AIs3P/X43/oCV29flec/7/V9T5HHf7xP1CiiivLOQKKKKACiiigAooooAKKKKACiiigAooooAKKKjnnjtbeW4mbbFEhd2xnAAyTxTAp6n/pPlaaP+XrPm+0K43/nlU4ORvyOlaFU7CCRfOubhdtxcPuK5zsQcIn4DkgEjczEdauU5dipdgoooqSQooooAKKKKACiiigAooooAKKKKACiiigD5tooor9oPuQooooAKKKKACiiigAooooAKKKKACiiigApzfMN3fv8A402lBwf6VE4vdboTXUSilYYOR909KSnGSkroE7hRRRVDCiiigAooooAKKKKACiiigAooooAKKKKAPW/hb/yLNz/1+N/6AldvXEfC3/kWbn/r8b/0BK7evyvOf9/q+p8jjv8AeJ+oUUUV5ZyBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABWe3/ABMrsx9bO3dWLD/lpKrZ259EKgnHU8Z+VgZLyeQstpati5fBZgM+VHnljngHAIXIOT2IDYsQQR20KxRLtRffJJPJJJ5JJySTySc1a0VylorklFFFQSFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAHzbRRRX7QfchRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAqnGQehoIwf60lKDxg9P5Vm04vmQttRKKUjB/rSVaaaugCiiimMKKKKACiiigAooooAKKKKACiiigD1v4W/8AIs3P/X43/oCV29cR8Lf+RZuf+vxv/QErt6/K85/3+r6nyOO/3ifqFFFFeWcgUUUUAFFFFABRRRQAUUUUAFFFFABVe6uvI2Rxp5txJny4s4zjqSeyjIyfcAZJAJdXXkbI40824kz5cWcZx1JPZRkZPuAMkgEtbXyN8kj+bcSY8yXGM46ADsoycD3JOSSTSVtWNK2rCztfssLKz+ZK7mSWTGNzH+g4ABJwABk4qxRRSbvqJu4UUUUgCiiigAooooAKKKKACiiigAooooAKKKKACiiigD5tooor9oPuQooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAFB4wen8qCMcjkHoaSlDEe49DWbi07xFbsJRTioIyv5HrTaqMlLYE7hRRRVDCiiigAooooAKKKKACiiigD1v4W/wDIs3P/AF+N/wCgJXb1xHwt/wCRZuf+vxv/AEBK7evyvOf9/q+p8jjv94n6hRRRXlnIFFFFABRRRQAUUUUAFFFFABVW5unSQW9tEs1yRu2M+1UX1ZsHGcEDgkn2BIh+1zX/AMth8sB4a6YEfjGCMPx/F93kEbuRVq2tYbSMpCGwTuZncuzH1LEkngAcnoAO1Xa25VrbjbW18jfJI/m3EmPMlxjOOgA7KMnA9yTkkk2KKKlu5LdwooopAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB820UUV+0H3IUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAZwcinZDdeD6gU2iolBPXqJq4pUj6HofWkpQxXofwpflb/AGT+lTzSj8Sv5r/L/K/yFdrcbRSlWAyRx69qSrjJSV07jTvsFFFFUMKKKKACiiigD1v4W/8AIs3P/X43/oCV29cR8Lf+RZuf+vxv/QErt6/K85/3+r6nyOO/3ifqFFFFeWcgUUUUAFFFFABRVOfVLWGZrdZPOuh/y7w/PJz0yB90cj5mwORkio/Kv73/AF8n2OA/8soTmRh/tP0Xg4IXkEZD1XK92VyvqTXN/FbyCFVae5I3LbxFd5X+9yQAODySBnjqQKh+wzXvzai+EP8Ay6wyHy/+BHAL55yDhcHG04ybVtaQWcZjt4lQE7mI6s3dmPUk9yeTU1PmtsF7bBRRRUEhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB820UUV+0H3IUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFACglTwaXcD95fxHFNoqJU4t36iaTHbQfut+B4oKMBnHHr2ptKCQcg4NTyzWzv6/8D/IVmJRTt574P1FOjCyOFKgZ7jNZ1MQqTtNfd/SE58u5HRVlrdFRiC3AzVaro1o1U3EcZKWx638Lf8AkWbn/r8b/wBASu3riPhb/wAizc/9fjf+gJXb1+Y5z/v9X1Pk8d/vE/UKK8u/4WRrH/PtY/8Aft//AIqu5sIby/062vG1W7ia4iSUxxpDtUsAcDKE4Ge5J964vYSMvYSNiqMmsaekjRLcrNKhIeK3BmdcdcqgJGDxkjrTf7EsG4mikuV7JdTPOoPqFckA+/Xk+tXo40ijWONFREAVVUYAA6ACs/dM/dKP2u/uP+PWx8pD/wAtbttvB6MEXJPqVbYeg9cH9nTT83t/PJ/0ztyYEB9RtO/p2LEc9OmNCijm7BzdiOCCG1hWG3ijiiX7qRqFUd+AKkooqSQooopAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB//9k=',
    'filemime' => 'image/jpeg',
    'filename' => 'imagefield_Gqih8B.jpg',
    'filesize' => 7652,
    'metadata' => array(
      'height' => 332,
      'width' => 519,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_Gqih8B.jpg',
    'uuid' => 'a477c157-dee1-4c33-88db-c3607287aa4f',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d8667848-1245-4f03-9b7a-4f3b68a82b68',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Conventio distineo dolor ea jumentum ullamcorper velit. Accumsan commoveo dolor haero mauris nibh pala quia vero voco. Consectetuer consequat exputo ille incassum jugis quae quidem. Abigo augue brevitas eros nimis. Distineo importunus pagus qui verto vicis. Acsi capto cogo esca ille probo proprius singularis tation uxor. Iusto molior plaga tation. Huic odio scisco. Enim genitus immitto lobortis modo. Eu eum illum minim nibh pala ut. Blandit importunus neque paulatim. Antehabeo blandit camur cui exputo nibh nimis premo sed. Dolore esca humo pala paratus populus quia utrum. Acsi eligo importunus. Consectetuer ea eligo sit. Erat gilvus inhibeo interdico iriure praemitto tincidunt usitas velit. Genitus hendrerit mos proprius quibus sed. Abluo cui dolor duis lenis meus pagus tincidunt. Aliquam brevitas cui letalis neque. Caecus metuo odio praesent saepius si velit. Adipiscing appellatio damnum os turpis typicus zelus. Amet cui defui feugiat importunus odio qui secundum wisi. Camur luctus nostrud proprius refoveo turpis uxor vel. Cui ludus virtus. Commodo molior olim torqueo vel. Abdo aliquam blandit dignissim dolore euismod fere praemitto vicis. Eligo euismod nulla pagus quibus volutpat. Ea macto si torqueo usitas vulputate. Appellatio ex gravis haero lobortis meus secundum. Abbas at mos. Eu in iustum uxor vicis. Cui elit ex lobortis magna ratis venio verto ymo. Eligo feugiat gilvus quidem. Augue exputo jus suscipere uxor. Acsi iaceo pecus si vicis vindico. Caecus defui dignissim facilisi feugiat gemino imputo nobis pecus similis. Eu modo quadrum tamen. Esse exerci qui. Decet eligo gemino incassum jumentum metuo meus nostrud pala saluto. Huic premo secundum vulpes. Causa ille verto. Laoreet nimis sagaciter. Acsi adipiscing aptent camur defui natu olim qui zelus. Abdo commoveo persto praemitto typicus valde verto zelus.</p>',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => 'a477c157-dee1-4c33-88db-c3607287aa4f',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/jpeg',
          'filename' => 'imagefield_Gqih8B.jpg',
          'filesize' => 7652,
          'height' => 332,
          'metadata' => array(
            'height' => 332,
            'width' => 519,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_Gqih8B.jpg',
          'uuid' => 'a477c157-dee1-4c33-88db-c3607287aa4f',
          'width' => 519,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2015-09-06 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Brevitas inhibeo iusto melior olim tego. Consequat facilisi utrum validus vel vicis. Abbas accumsan hos importunus in iustum lucidus ludus ratis. Autem camur erat eros facilisis interdico vicis virtus volutpat ymo.

Exerci iustum paratus. Acsi elit et euismod haero in obruo olim typicus vero. Damnum dolus praesent. Jumentum natu populus ratis. Accumsan aptent camur exerci huic ille quae ullamcorper. Capto feugiat plaga sagaciter tego ut vel. Amet eligo interdico qui saepius sagaciter tamen te vel wisi.

',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/8',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 1,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'ATP i går, som 50-årig og i morgen',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ATP i går, som 50-årig og i morgen',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 1,
    'uuid' => 'd8667848-1245-4f03-9b7a-4f3b68a82b68',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/a685e268-920b-4f31-bba0-2bf33bdeca54',
      'cause' => 'node/658e51f1-007e-45a3-abb4-575e0c6b49c7',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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fM1v4kvU/G8d/vNT/E/zCiiisjlCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigByffFS1En3xUtfQZV/Bfr+iP0XhH/cZ/4n+UQooor0z6kKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACsrU7D+1LlYfN8ryUDZ27s7iR6j+7+tatV4+dQnI5AjjUn3yxx9cEfmKqLtqjajOVNucd1/wAMQQcXF0DwTIGA9tijP5g/kasVXHy6g2f+WkQx/wABJz/6GP1qxXx9XdPyX5H4ri9ZxktnGP4JJ/imgooorI5QooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAcn3xUtRJ98VLX0GVfwX6/oj9F4R/wBxn/if5RCiiivTPqQooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKr23M12w+6ZuD64RQf1BH4VYqvY82iv2kLSD6MxYfjg0+hcdIt/1/WhBN8t1bOOrFoz9CN381H61Yqve8Wjv/wA88SY9dpDY/SrFfIS1hF+q/X9T8Yq+9Qpy7Xj9z5r/APk1vkFFFFZHKFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFADk++KlqJPvipa+gyr+C/X9EfovCP8AuM/8T/KIUUUV6Z9SFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAEV1K0FpNKoBZI2YZ6ZAzToYlggjiUkqihRnrgDFRXfzeRF/fmXn02/P/wCy4/GrFPoW9IJf1/W5BVey4tET/nnmPPrtJXP6VYqun7u8lTtKBIPcjCn9Nv5mvkI6xcfn93/D3+R+MUfeo1KfXSX3XVvubfovusUUUVkcoUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAOT74qWok++Klr6DKv4L9f0R+i8I/7jP/E/yiFFFFemfUhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBX+/qXp5UP57z/TZ+tWKr2fzxvP8A89nLj/d6KfxUA/jVimy6mjt2/r8yCq918nlz/wDPNxu/3Twcn0GQf+A1YpsiLLG0bjKsCpHqDXx0JKMk3sfimHqKnVUpbdfR6NfNXHUVDbOzwKJDmVPlk/3h1P49R7EVNSlFxbTJq03Sm4PoFFFFSZhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFADk++KlqJPvipa+gyr+C/X9EfovCP8AuM/8T/KIUUUV6Z9SFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFQXjMLYohIeQiNSDyCeMj6DJ/Cp6rt+9vlA5SEFj/vngfiBuyP8AaFNFw3v2J1VUUKoCqBgADAApaKKRBBRRRXxh+Ilf/U3f+xP/AOhgf1A/8d96sVFcRmSL5CBIp3IT2I/p2PsTTopBNEsiggEdD1B9D7itZe9FS+X+X4fkdVb95SjV6r3X8tvw0/7dY+iiisjlCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAHJ98VLUSffFS19BlX8F+v6I/ReEf9xn/AIn+UQooor0z6kKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAbJIsUbyOcIgLMfQCo7aNkjLyDEsh3uPQ+n4AAe+M024/fSJbD7p+eT/dHb8Tx7gNVin0Lekbd/6/r5BRRRSIIKKKK+MPxEKrp+5umT+CX5l9m7j8ev/fRqxUc0XmoADtZSGVsdCP8AOD7E1pBpOz2Zvh5xTcJ/DLR+XZ/J/hddSSio4JfOhV8bT0Zc5wRwR+BzUlQ007MynCVOThLdaBRRRSJCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAcn3xUtRJ98VLX0GVfwX6/oj9F4R/3Gf+J/lEKKKK9M+pCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKRmVFLMQqgZJJwAKWq837+YW38GA8n0zwv0ODn2BHemioq7FtVYq07gh5TuwRyq/wAI9uOo9SanoooYpO7uFFFFIRBRRRXxh+IhRRRQBXb9xcBh/q5jhvZsAA/iBj649TVimyIssbRuMqwKkeoNRwu2WikOZE5z6qScH9OfcHtitX70b9V/X/A+46p/vqSmt46P02T+Wz+XmTUUUVkcoUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFADk++KlqJPvipa+gyr+C/X9EfovCP+4z/xP8ohRRRXpn1IUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFADJpVhiaRgSFHQdSewHuelNt4mjjJcgyud0hHTdgDj24A/CmJ/pFx5n/LKIkJ7uMhj9B0H4+xqxT2Lfurl/r0/r9AooopEBRRRQBBRRRXxh+IhRRRQAVFNGWKOhAkQ5GehHcH2/qAecVLRVRk4u6Lp1HTlzRGRSCaJZFBAI6HqD6H3FPqvL/o7vcD/VkfvB6Y/iH4dfYD0wbFOcUtVszStTStOHwvby7r5X+e4UUUVBgFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFADk++KlqJPvipa+gyr+C/X9EfovCP8AuM/8T/KIUUUV6Z9SFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABUE7NI32aMlWdSWcHlF6ce57fQntgvml8oKAu53O1FzjJwT17DAJ/CiGLykILbnYlmbHUn+nYewFPzLj7vvMeqqihVAVQMAAYAFLRRSICiiigAooooAgooor4w/EQooooAKKKKACq4/0aRU/wCWDcL/ALB7L9D29OncCrFIyhlKsAVIwQRwRVxlbR7G1Koo3jLWL3X5P1XT7tmxaKgVjAwRyTGThHJ5B9D/AEPfoees9KUbE1Kbg+6ezCiiipMwooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigByffFS1En3xUtfQZV/Bfr+iP0XhH/AHGf+J/lEKKKK9M+pCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACmySLEhdzhR/n86JJFiQu5wo/z+dRxxs7iaYYYfcT+5/wDZfy6DuSykur2CCNjiaYYmYfd/uD+6P6nv+QE1FFITd3cKKKKBBRRRQAUUUUAQUUUV8YfiIUUUUAFFFFABRRRQAjKGUqwBUjBBHBFQqxgYI5JjJwjk8g+h/oe/Q89Z6RlDKVYAqRggjgirjK2j2NqdRRXLLWL/AKuvMWiq+823yyFjF/DJydvs3+P5+psUpRa9BVaThZ7p7Pv/AF1QUUUVJkFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQA5PvipaiT74qWvoMq/gv1/RH6Lwj/uM/8T/KIUUUV6Z9SFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAU2SRYkLucKP8/nSSypCoZyeTgAAkk+wHJpkcbO4mmGGH3E/uf/Zfy6DuSylHq9gjjZ3E0www+4n9z/7L+XQdyZqKKQm7hRRRQIKKKKACiiigAooooAgooor4w/EQooooAKKKKACiiigAooooAKr7XtuU+aAfwAcr9PUe35dhViiqjK3oa0qrhdbp7r+tn2e41JElQPG6up6MpyDTqheJg5khba56qfuv9fT6j264xSxzrI2wgpIBkxtjdj146j3FU4XV47f1/Vy5UU1z0tV26r18vNabXs3YlooorM5wooooAKKKKACiiigAooooAKKKKACiiigAooooAcn3xUtRJ98VLX0GVfwX6/oj9F4R/wBxn/if5RCiiivTPqQooooAKKKKACiiigAooooAKKKKACiiigAooooAKilnVGEa4eYjKx55x6n0Hv8AzPFM883Hy2xyh6zjBUf7vqf0/LFSxRLEpAJJJyzHqx9TT23L5VH4vuGxQsrGSVw8pGMgYAHoBzj39fwGJaKKRLberCiiigQUUUUAFFFFABRRRQAUUUUAQUUUV8YfiIUUUUAFFFFABRRRQAUUUUAFFFFABTJIklXa4PByCCQQfYjkU+imm07oqM5QfNF2ZX8yWDiUNKnZ0XkfUDr9QPwFTqwZQykFSMgg8EUtQNbAMXhYxOTk7fusfcdD9evvWl4y30f4f16fcdHNSrfH7su6WnzS2+Wnl1J6Kr/afL4uU8r/AG85T/vrt+OPbNWKiUHHcyq0Z0rcy0ez3T9GtH8goooqTIKKKKACiiigAooooAKKKKACiiigByffFS1En3xUtfQZV/Bfr+iP0XhH/cZ/4n+UQooor0z6kKKKKACiiigAooooAKKKKACiiigAopks0cKhpHCgnA9SfQDufaot09xwgaCP++cbz9AQQB9eevA607FKLevQklmWLAIZnb7qKMk/4DpyeOaj8l7jm44j7RA/+hEHn6dOT14NSRQRw52Lhm+8xJLN9SeTUlF+w+ZR+EKKKKRAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBBRRRXxh+IhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAVX+zeXzbP5X+xjKf989vwx75qxRVRm47GtKtOlflej3W6fqno/mV/tDR/6+Fox3dTuT8+o+pAFTqwZQykFSMgg8EUtQNax7i8eYpCclo+CT7jofxBq7wl5fl/X3mt6FTdcj8tV+LuvN3fkieiq/8ApUf9yZf++Gx/In8h/Q+2RL/rt0B/6ajA/wC+uh/A0eyk/h19P8tw+p1Jfwvf/wAOr+74l80vxRYooorI5QooooAKKKKACiiigByffFS1En3xUtfQZV/Bfr+iP0XhH/cZ/wCJ/lEKKKK9M+pCiiigAooooAKKKZLNFAoaWRI1Jxl2AGaBpN6IfRVf7S8nEFvI3+1IPLUfXPP5A0eTcSf62fYv9yEY/Asck/Ubf8HYrkt8TsSSzxw43thm+6oBLN9AOTUe65m4VPs692fDN+ABI/Ek/SpIreKDPlxqpb7xA5b6nqT9ako0C8Vsvv8A6/zIoreOJi+C0hGDI5yx/HsPYce1S0UUiW29WFFFFAgooooAKKKKACiiigAooooAKKKKACiiigAooooAgooor4w/EQooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAr/Y4V/wBWGi9PKYqM+uBwfxFHl3KfcnWQdcSpyfbIxj8jViitfaz66+up1fXKz+N83+JJ/i7tfIr+dOvD2rMfWJwR+uP5UfbYR94ug/vSRsoH4kYqxRRzQe8fuf8AncPa0JfFTt/hbX383N+FiOKeGbPlSpJjrsYHFSVHLBDNjzYkkx03qDio/sVuPuR+X6+UxTP124zRam+rX4/qgthXreS8rJ/jeP5IsUVX+yRjlZJwex85jj8CcfnR9nl/5/J/yT/4mjlg9pff/wAC4exoS+Gpb/Emvy5v0LSffFS1SS3l3D/TJ/yT/wCJqX7NL/z+3H/fMf8A8TXu5XFKi7O+vn2R+gcKU4xwUkpp+89r9o90ixRVf7K54e7uHXuuVXP4qAf1o+xRf37j/wACJP8AGvS0Pp7RW7/r8CxUDXtqrFDcRbwcbAwLZ9Mdc+1J9gs+9rCx7lkBJ+pPJNTqqooVQFUDAAGABRoHuLu/w/zIPtgbiOC4kb08sp+rYFG+7k+7FHEp7yNuYfVRx/49/hViii4c0Vsiv9mkf/XXMhB6rHhF/DHzD8/8KfFbQwsXSMbyMFzyxHux5NS0UXYOcnoFFFFIgKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAIKKKK+MPxEKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigByffFS1En3xUtfQZV/Bfr+iP0XhH/cZ/4n+UQooor0z6kKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigD//2Q==',
    'filemime' => 'image/jpeg',
    'filename' => 'imagefield_sI4TO9.jpg',
    'filesize' => 11134,
    'metadata' => array(
      'height' => 521,
      'width' => 493,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_sI4TO9.jpg',
    'uuid' => 'a685e268-920b-4f31-bba0-2bf33bdeca54',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/658e51f1-007e-45a3-abb4-575e0c6b49c7',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Praesent sagaciter vereor. Abbas amet iriure iusto neque pagus qui quia sit. Facilisi metuo modo quibus utinam. Eu importunus metuo neque sed usitas voco. Adipiscing amet populus refero vero. Aliquip aptent brevitas erat loquor refero si tum verto.

Duis erat gemino gilvus inhibeo sed similis tamen. Distineo sit velit. Abbas iriure iusto laoreet. Ibidem incassum jugis melior nunc paulatim refoveo vel wisi. Damnum ea imputo jus voco. Antehabeo lenis nutus singularis tego. Causa esse eum inhibeo jus pneum refoveo saluto uxor vindico.

Acsi exputo refoveo suscipere tum venio. Aliquip consequat exputo lucidus macto paulatim. At autem feugiat gilvus iaceo importunus jus nostrud olim plaga. Incassum luctus saluto scisco sino vindico. Consectetuer conventio hos paratus. Abluo accumsan et ex hos huic meus persto ullamcorper utrum.

Antehabeo commoveo iriure macto mos nostrud quae. Appellatio at distineo nisl refero ut valde vero virtus volutpat.

Caecus quia sino. Brevitas humo iaceo luctus molior patria plaga sagaciter tation. Ideo immitto mauris sudo. Abbas gilvus validus. Cogo ex exerci luctus neque tincidunt virtus. Appellatio defui esse eu nisl nostrud proprius roto saluto venio.

Abbas abigo eum lenis pecus te. Fere voco vulpes. Camur eu jumentum mos obruo praesent tation ulciscor usitas wisi. Eu exputo interdico meus quidem saepius. Ad aliquip cogo facilisi melior nimis ut veniam ymo. Antehabeo patria proprius. Camur jumentum vindico. Consectetuer dignissim similis. Elit huic jugis natu nimis pneum quibus quidne utrum.

Aliquip distineo dolus ibidem luctus magna nobis quae saluto uxor. Lenis premo verto. Abico aliquam esse iusto laoreet metuo pagus pertineo ymo.

',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => 'a685e268-920b-4f31-bba0-2bf33bdeca54',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/jpeg',
          'filename' => 'imagefield_sI4TO9.jpg',
          'filesize' => 11134,
          'height' => 521,
          'metadata' => array(
            'height' => 521,
            'width' => 493,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_sI4TO9.jpg',
          'uuid' => 'a685e268-920b-4f31-bba0-2bf33bdeca54',
          'width' => 493,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2016-06-25 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Adipiscing autem commodo in iriure turpis veniam vulpes. Ad consequat esse ex letalis macto paulatim pertineo pneum praemitto. Esse ille magna neo plaga ullamcorper zelus. Abluo at augue nimis venio vulpes. Acsi et euismod eum ideo nimis paratus typicus vulputate. Commoveo defui pagus plaga turpis. Ex inhibeo quidne quis suscipit. Abigo dolor enim jugis lenis meus si singularis tamen torqueo. Lenis melior meus typicus. Abico dolus in luptatum mauris patria persto tincidunt. Adipiscing comis ea et neque praesent sagaciter sudo. Aliquam ibidem interdico rusticus suscipere tamen. Huic nostrud paulatim pneum tego typicus utrum. Bene erat venio vulputate. Appellatio augue euismod pneum si sit. At cogo distineo letalis neque proprius ullamcorper utinam. Acsi ad appellatio consectetuer damnum eros jumentum plaga scisco wisi. Letalis quidem suscipit zelus. Jumentum mos suscipit. Cui dolore exerci gravis ille sudo voco. Cogo erat iaceo si tamen vindico. Ad bene iustum macto nibh sed. Abdo abigo ad commodo duis ludus nobis si veniam. Abbas enim modo praemitto venio. Accumsan facilisis ideo mos quae quidne tego zelus. Abbas huic ludus nunc praesent quidne secundum vindico. Ad cogo iriure laoreet saluto secundum usitas. Roto usitas vindico. Ibidem nimis nunc obruo sudo wisi. Accumsan aliquam consectetuer damnum huic humo jugis jus nostrud pneum. Augue haero iriure magna neque pala pertineo. Dolus hendrerit huic nostrud premo tamen torqueo usitas. Eligo fere persto pertineo refero si. Abluo bene imputo lucidus metuo utrum verto. Appellatio feugiat illum loquor nobis pagus scisco typicus valetudo. Esse ex nisl nulla ratis rusticus sit venio. Bene commoveo enim exputo importunus jumentum luctus singularis. Dolor eligo esse jumentum letalis nostrud nulla persto saluto valetudo. Abigo aliquam dolore huic lenis molior oppeto wisi. Abluo consequat conventio feugiat inhibeo mos nisl suscipere tego vindico. Distineo exputo saepius. Lenis ludus os similis valde. Ad at eum hos luctus mos natu pala praemitto sit. Autem causa gemino humo quae saepius vindico. Accumsan letalis mauris neque saepius. Elit eum ex importunus nostrud obruo wisi. Erat genitus iriure oppeto os patria sagaciter voco vulpes. Appellatio damnum luptatum magna meus mos paulatim ut valetudo. Ea eu iaceo ille jus lobortis os secundum. Abigo ad augue iustum persto probo qui rusticus sit. Abdo dolore iriure lobortis obruo sudo vulpes. Distineo et iusto loquor sudo vulputate. Comis pecus singularis ut. Distineo pecus praesent probo singularis valetudo vicis vulputate. Abluo accumsan commodo decet euismod meus ratis.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/7',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 1,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'ATP fylder 50 år',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ATP fylder 50 år',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 0,
    'uuid' => '658e51f1-007e-45a3-abb4-575e0c6b49c7',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/c2f61883-f61b-4b09-b528-7781ce6b5c4b',
      'cause' => 'node/b1fb74cf-9ce3-440a-b2e2-964594a4170c',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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aKpdWnqvxX9dvyG0VZ2pdf6tNlwf4R92T/dHY+3ftjgGuysjFWUqwOCCMEGk1YUoW1WqEooopEBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB2tFFFe+fJhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABTgu0Zb8B60AbRk9ewppOTk9aZukqWsleXbt6/5ff2FJJOTSUUUjFtyd3uFFFFAgooooAKKKKACiiigAooooAKKKKACiiigDL17/jxT/roP5Guerode/wCPFP8AroP5GuerysX/ABT3sv8A4HzCiiiuU7gooooAKKKKACiiigAooooAKKKKACiiigAqwrLcKI5GCygYSQnAI/usf5Ht0PHSvRTTsVGXL6DpI2ico4ww/H8fcU2p45FkQQzHCj7j9dnt7r/LqO4MUkbROUcYYfj+PuKbXVDlFW5o7f1/XmNoooqSAooooAKKKKACiiigAooooAKKKKACiiigDtaKKK98+TCiiigAooooAKKKKACiiigAooooAKcBtG4/gKFA+83T+ZpCSTk0zeK9kud7vZfr/l569NUJycnrRRRSMG76sKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigDL17/AI8U/wCug/ka56uh17/jxT/roP5GuerysX/FPey/+B8wooorlO4KKKKACiiigAooooAKKKKACiiigAooooAKKKKACrETLNGYJGAIH7picYOehPoefofTJqvRTTsVGXKxWVkYqylWBwQRgg0lWU/0qLyzzcLgR+rr/d9yOMfiPQVWoatqOUbarZhRRRSICiiigAooooAKKKKACiiigAooooA7WiiivfPkwooooAKKKKACiiigAooooAKVV3H0Hc+lJT2+UbO/8X1pmtKK1nPZfj2X9dLjWbOOwHAFJRRSM5Sc3zSCiiigQUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAGXr3/AB4p/wBdB/I1z1dDr3/Hin/XQfyNc9XlYv8AinvZf/A+YUUUVyncFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAVZm/0lDdD/Wbj5wH/AKF9CT+B9MgVWp8MrQyB1APBBB6EEYI/Imqi+jLhJL3ZbP8Aq4yipriJY5AYyTE43Rk9SuSOffgj8PSoaTVnYUouLswooopEhRRRQAUUUUAFFFFABRRRQB2tFFFe+fJhRRRQAUUUUAFFFFABRRSgEnAoGk5Oy3HL8o39/wCH60ynOQTgdBwKbTNazSapx2j+L6v/AC8rBRRRSMQooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigDL17/jxT/roP5Guerode/48U/66D+Rrnq8rF/xT3sv/gfMKKKK5TuCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKALNv8A6Qn2Q/eLZh/3zgYPsQPzA6DNVqKs3X77F0vPmf6z/Zfvn643enJA6VW69DX44+a/L/gfl6FaiiipMgooooAKKKKACiiigAooooA7WiiivfPkwooooAKKKKACiiigAp4+WMnueB/WmgEkAdTSuQTgdBwKZvS9yEqnyXq9/uX3NobRRRSMAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAy9e/48U/66D+Rrnq6HXv8AjxT/AK6D+Rrnq8rF/wAU97L/AOB8wooorlO4KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKs2X7yU2x+7PhB7N/Cfz4+hNVqKcXZ3KhLlkmFFWbv8Ae7Lof8ts7/8AfH3vzyG9Pmx2qtRJWdgnHllYKKKKRIUUUUAFFFFABRRRQB2tFFFe+fJhRRRQAUUUUAFFFFAD04DN6dPr/nNMp7cKq/ifx/8ArYplNm9f3eWn2X4vV/NbfIKKKKRgFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAGXr3/Hin/XQfyNc9XQ69/x4p/10H8jXPV5WL/invZf/AAPmFFFFcp3BRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBZt/3tvNAeSF82Me4+9+G3JPrtFVqfDK0E8cygFo2DAHpkHNPuolhuXRCTHnKE9Sp5U/kRVPWNzWXvU0+2n+X6/gQ0UUVJkFFFFABRRRQAUUUUAdrRRRXvnyYUUUUAFFFFABSqu5wvqcUlPTjcfRT+vH9aaNcPFSqxUtuvotX+A1m3MT0z29KSiikZzk5ycpbsKKKKBBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBl69/wAeKf8AXQfyNc9XQ69/x4p/10H8jXPV5WL/AIp72X/wPmFFFFcp3BRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAVZn/eWdtMfvDdEfU7cEH8mA/4DVarMPz2N1H027Jc/Q7cf+P5/Cqj1RrS1vHuvy1/QrUUUVJkFFFFABRRRQAUUUUAdrRRRXvnyYUUUUAFFFFABT+kX1b+X/66ZT34VB7Zx+P/AOqmb0NIzl2X5tL8mxlFFFIwCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAy9e/48U/66D+Rrnq6HXv+PFP+ug/ka56vKxf8U97L/wCB8wooorlO4KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACrOn830cf/AD1zFn03Arn8M5qtSqzIwZWKsDkEHBBpxdmmXTlyzUuzEoqxfKq39wEUBPMYoAONpORj2xiq9DVnYU48snHsFFFFIkKKKKACiiigDtaKKK98+TCiiigAooooAKfJ9/HoAD+VMp8v+tf/AHjT6G8f93l6x/KQyiiikYBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAZevf8eKf9dB/I1z1dDr3/Hin/XQfyNc9XlYv+Ke9l/8D5hRRRXKdwUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAFm9+aSKQfdeGPafXChT+qkfhVarN1/x72X/XE/8Aox6rVc/iua1vjv3s/vVwoooqDIKKKKACiiigDtaKp/2rZf8APb/x1v8ACj+1bL/nt/463+FfUfU8T/z7l9zPmfqtf+R/cy5RVP8AtWy/57f+Ot/hR/atl/z2/wDHW/wo+p4n/n3L7mH1Wv8AyP7mXKKp/wBq2X/Pb/x1v8KP7Vsv+e3/AI63+FH1PE/8+5fcw+q1/wCR/cy9GMyoD0yKaTk5PWq8GpWklxEizZZnAA2nrn6VH/atl/z2/wDHW/wo+p4jb2cvuZ0Sw1b2EVyPd9H2iXKKp/2rZf8APb/x1v8ACj+1bL/nt/463+FH1PE/8+5fczn+q1/5H9zLlFU/7Vsv+e3/AI63+FH9q2X/AD2/8db/AAo+p4n/AJ9y+5h9Vr/yP7mXKKp/2rZf89v/AB1v8KP7Vsv+e3/jrf4UfU8T/wA+5fcw+q1/5H9zLlFU/wC1bL/nt/463+FH9q2X/Pb/AMdb/Cj6nif+fcvuYfVa/wDI/uZcoqn/AGrZf89v/HW/wo/tWy/57f8Ajrf4UfU8T/z7l9zD6rX/AJH9zLlFU/7Vsv8Ant/463+FH9q2X/Pb/wAdb/Cj6nif+fcvuYfVa/8AI/uZcoqn/atl/wA9v/HW/wAKP7Vsv+e3/jrf4UfU8T/z7l9zD6rX/kf3MuUVT/tWy/57f+Ot/hR/atl/z2/8db/Cj6nif+fcvuYfVa/8j+5lyiqf9q2X/Pb/AMdb/Cj+1bL/AJ7f+Ot/hR9TxP8Az7l9zD6rX/kf3MuUVT/tWy/57f8Ajrf4Uf2rZf8APb/x1v8ACj6nif8An3L7mH1Wv/I/uZcoqn/atl/z2/8AHW/wo/tWy/57f+Ot/hR9TxP/AD7l9zD6rX/kf3MuUVT/ALVsv+e3/jrf4Uf2rZf89v8Ax1v8KPqeJ/59y+5h9Vr/AMj+5lfXv+PFP+ug/ka56tfW9StJLNAsuT5gP3T6H2rB+2Qf89P0Nedictxs6l40ZP8A7df+R7+X4Wv7D4Hv2ZPRUH2yD/np+ho+2Qf89P0Nc/8AZWP/AOfE/wDwF/5Hd9Vr/wAj+5k9FQfbIP8Anp+ho+2Qf89P0NH9lY//AJ8T/wDAX/kH1Wv/ACP7mT0VB9sg/wCen6Gj7ZB/z0/Q0f2Vj/8AnxP/AMBf+QfVa/8AI/uZPRUH2yD/AJ6foaPtkH/PT9DR/ZWP/wCfE/8AwF/5B9Vr/wAj+5k9FQfbIP8Anp+ho+2Qf89P0NH9lY//AJ8T/wDAX/kH1Wv/ACP7mT0VB9sg/wCen6Gj7ZB/z0/Q0f2Vj/8AnxP/AMBf+QfVa/8AI/uZPRUH2yD/AJ6foaPtkH/PT9DR/ZWP/wCfE/8AwF/5B9Vr/wAj+5k9FQfbIP8Anp+ho+2Qf89P0NH9lY//AJ8T/wDAX/kH1Wv/ACP7mT0VB9sg/wCen6Gj7ZB/z0/Q0f2Vj/8AnxP/AMBf+QfVa/8AI/uZPRUH2yD/AJ6foaPtkH/PT9DR/ZWP/wCfE/8AwF/5B9Vr/wAj+5k9FQfbIP8Anp+ho+2Qf89P0NH9lY//AJ8T/wDAX/kH1Wv/ACP7mT0VB9sg/wCen6Gj7ZB/z0/Q0f2Vj/8AnxP/AMBf+QfVa/8AI/uZoSc6bbk8kSyKD7YQ4+mSfzNVqfJdQ/2Vbtv4M8o6H+7HVX7ZB/z0/Q1UssxzelGf/gL/AMjWrhqzl8D2XR9kT0VB9sg/56foaPtkH/PT9DU/2Vj/APnxP/wF/wCRl9Vr/wAj+5k9FQfbIP8Anp+ho+2Qf89P0NH9lY//AJ8T/wDAX/kH1Wv/ACP7mT0VB9sg/wCen6Gj7ZB/z0/Q0f2Vj/8AnxP/AMBf+QfVa/8AI/uZbooor9XNAooooAKKKKALOn/8hK1/67J/MVWqS3l8i5im27vLcNjOM4OaLiLyLmWHdu8tyucYzg4rNaVH5r8v+HNHrTXk/wA7f5EdFFFaGYUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAFPUv+Pdf98fyNZdampf8e6/74/kay67KPwnv5d/A+YUUUVqdwUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAF2X/kC2v/AF8Tf+gxVSq7c/u9MsYuu/zJ8+mTsx/5Dzn39qpVlR+F+r/NjluFFFFaiCiiigAooooA6CiiivOPkgooooAKKKKACrOof8hG5PZpGYH1BOQfoRVarN5zJE4+60KYPrhQp/VSKzf8Rej/AENF/Dfqv1K1FFFaGYUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAFPUv+Pdf98fyNZdampf8e6/74/kay67KPwnv5d/A+YUUUVqdwUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAF2+4t9PQ8Mtv8w7jMjsM/UEH6EVSq7qvF+Yz96KOOJx6MqKrD8CCKpVlR/hp99fv1HLcKKKK1EFFFFABRRRQB0FFFFecfJBRRRQAUUUUAFWZvnsrZ+m3fFj6Hdn/x/H4VWqzF+8sZ07xlZBnsPunHuSV/L2rOppZ9n+en6mlPW67r8tf0K1FFFaGYUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAFPUv8Aj3X/AHx/I1l1qal/x7r/AL4/kay67KPwnv5d/A+YUUUVqdwUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFTWdv9rvYLbdt82RY92M4ycZxUNXdN+SWa47QQs/HUMfkUj3DMp9sZ61nVk4wbW/69BrcgvLj7Xez3O3b5sjSbc5xk5xmoaKKuMVFJLoJ6hRRRTAKKKKACiiigDoKKKK84+SCiiigAooooAKs2PzXQi/57Ax47ZIwM+wOD+FVqVWZGDKSrA5BBwQamceaLRUJcslISirF4qi5LoAEkAkUAcAHnA+hyPwqvTjLmimE48smgooopkhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBT1L/j3X/fH8jWXWpqX/AB7r/vj+RrLrso/Ce/l38D5hRRRWp3BRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAVdX91o7t/FcTBAR12oMsD7Euh/4D7CqVXdQ/deRaD/lhGN/b52+ZsjsRkKe/yfgMqmrjH5/d/wAGw13KVFFFaiCiiigAooooAKKKKAOgooorzj5IKKKKACiiigAooooAst++sVI5eAlT/uHkfgDuyf8AaFVqsWbL5/lOQI5h5bknAAJ4P4HB/CoGVkYqwKsDggjBBrOGjcfn9/8AwTSesVL5fd/wBKKKK0MwooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAp6l/wAe6/74/kay61NS/wCPdf8AfH8jWXXZR+E9/Lv4HzCiiitTuCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigCzYRJLdoZlzbx/vJucfIOoz6noPcgVDNK888k0rbpJGLMcYyScmrQ/0fSiw4kumK89RGpB/EFsc/8ATMjuapVlD3pOXyX6/j+Q3orBRRRWogooooAKKKKACiiigDoKKKK84+SCiiigAooooAKKKKACrNz+9iiuf4nyj+7LjJ/EEH65qtVi3ZWWSByAsgypJwA46fzI9Pmz2qJ6Wl2/L+tfkaU9bx7/AJ/1p8yvRSsrIxVgVYHBBGCDSVZmFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAFPUv+Pdf98fyNZdampf8e6/74/kay67KPwnv5d/A+YUUUVqdwUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAVLbQNdXUNuhAeVwilumScc1FV2D/RbSS4biWVTHCD12nIdvpjK/wDAjjlaipJqOm/T+v60GlqRXk6z3BMQIgQBIlPUKOme2T1OO5JqvRRVRiopJCbuFFFFMAooooAKKKKACiiigDoKKKK84+SCiiigAooooAKKKKACiiigCzcfvokuR94/JJ/vDv8AiOeepDVWqW3lWOQhwTE42yAdSuQePfgH8KbNE0MrRsQSp6joR2I9j1rOHuvk+70/4BpP3lz/AH+v/B/zGUUUVoZhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAFPUv+Pdf98fyNZdampf8AHuv++P5Gsuuyj8J7+XfwPmFFFFancFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAS28DXNwkKEAscbm6KO5PoAOSfQU+8nWe4JiBECAJEp6hR0z2yepx3JNSv8A6JYrGOJrld0mf4Y8gqPYkjd9NuDyc0qyj78ufp0/z/r9RvRWCiiitRBRRRQAUUUUAFFFFABRRRQB0FFFFecfJBRRRQAUUUUAFFFFABRRRQAVZT/SYVi6zJxEP7y5JK/XJyPqR6Cq1KrMjBlJVgcgg4INTKN1puVCVnrsJRViVVljE8YAIH71QMYOeoHoePofTiq9OMroJR5WFFFFMkKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigCnqX/Huv++P5GsutTUv+Pdf98fyNZddlH4T38u/gfMKKKK1O4KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAqzaxIFNzcLmBchVzjzHxwo9s4z0wO+SMxwQNcOVUhVUbndvuovqf85JwBkkU+7nWV/LhBW2jJESnrj1P+0cDJ/DoABnNuT5F8/67jXcimleeeSaVt0kjFmOMZJOTTKKKtJJWQgooopgFFFFABRRRQAUUUUAFFFFAHQUUUV5x8kFFFFABRRRQAUUUUAFFFFABRRRQA+KVoZA6gHggg9CCMEfkadLEoUSxEmInHPVT6H+h7/mBFUkMvlFgV3I42uucZGQevY5AP4VEk78y3Li1bllsR0VJLF5eGVt8bfdbGM+x9CPT+mDUdUmmrolpp2YUUUUxBRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQBT1L/j3X/fH8jWXWpqX/Huv++P5Gsuuyj8J7+XfwPmFFFFancFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABT4onnlEca5Y++APUk9gBzntSIjSOqIpZ2OFVRkk+gqzI62sMlvEweSQBZnByuAQdq+vIBLdyOOOWicmtI7jSGzSpHB9lgbdHuDSSY/1jAEDAPQDJx3OcnsBWoopxiooG7hRRRVCCiiigAooooAKKKKACiiigAooooA6CiiivOPkgooooAKKKKACiiigAooooAKKKKACiiigCSKXy8qy742+8ucZ9x6Eev9MillgKKJEYPETgMOo9iOx6/kcZ61FT4pWiYkAEEYZT0YehqHFp3iWpJrlkMoqaSFShlhbcg5ZT95Pr6j3HtnGcVDVRkpbEyi4vUKKKKYgooooAKKKKACiiigAooooAKKKKACiiigCnqX/Huv8Avj+RrLrU1L/j3X/fH8jWXXZR+E9/Lv4HzCiiitTuCiiigAooooAKKKKACiiigAooooAKKKKACnxRPPKI41yx98AepJ7ADnPanQQNcOVUhVUbndvuovqf85JwBkkVJLKkURt7dsqf9ZLjBk9h6KD279T2CxKWvLHf+v6t/wAONLqxzutmjQwsGmYbZZVOQB3VT/Nu/QcZLVKKKcY8vqDYUUUVQgooooAKKKKACiiigAooooAKKKKACiiigDoKKKK84+SCiiigAooooAKKKKACiiigAooooAKKKKACiiigB0cjROHQ4Yf5/EVPtS65j+Wc/wDLMD5X/wB30Pt+XYVWoqZRvqtyozsrPVCsrIxVgVYHBBGCDSVYWdJFCXClgBhXXAZf/ih7H0GCKZLAUUSIweInAYdR7Edj1/I4z1pKetpaMbhpeOqIqKKKsgKKKKACiiigAooooAKKKKACiiigCnqX/Huv++P5GsutTUv+Pdf98fyNZddlH4T38u/gfMKKKK1O4KKKKACiiigAooooAKKKKACiinxRPPKI41yx98AepJ7ADnPahtJXYDKsxWn7oT3LPDbt91wmS56YUEjOO5zgfXAMn+jWf/Txcj6eUh/Xf+gyP4hVWWV55TJI2WPtgD0AHYAcY7VlzSn8Oi7/AOX/AAfuHotyWe6MqCGNBFApyqADJ92OMseTyemTgAcVXoorSMVFWQm7hRRRTAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAOgooorzj5IKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAp8U0kLFo3KkjB9CPQjuPamUUmk1Zgm07os7oLjhwsEn98Z2H6gAkH6cdBgdailglhxvXCt91gQVb6EcGo6kiuJoM+VIyhvvAHhvqOhH1qOWUfh/E05oy+L71/l/wxHRVnzLabmVGifu0QyD/AMBJGD9Dj2pGtJNpeNkmQDJMZyQO5K9QPcin7RbS0D2besdf67FeiiirMwooooAKKKKACiiigCnqX/Huv++P5GsutTUv+Pdf98fyNZddlH4T38u/gfMKKKK1O4KKKKACiiigAooqa3tJ7ncYkyq43OxCquemWPAz7mlKSirt2C1yGnIjSOqIpZ2OFVRkk+gq35Nlb/6+d5pB1jt8BfpvPceysD2PPDX1GfY0UGLaFgQ0cGVDA9mOct3+8TjJxWftHL4F9+n/AAf08x2tuO+yRWvzXrfN/wA+8Tjf/wACOCFxzkH5sjGBnIjlvpZIjDGqQQHrFECA3f5iclueRknHbFVqKap3d56v8Pu/p+YX7BRRRWggooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigDoKKKK84+SCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigApVZkYMpKsDkEHBBpKKALP2x3/ANekc/vIPm/Fhhj+Jo22cnR5oT0AYBx9SRggfgfxqtRWfs0vh09P8tjT2rfxa+v+e5Z+xs3+plhm/wB18En0Ctgk/QVDLDLAwWWN42Izh1IOKZUsV1cQKVinljUnOEcgZotNbO/9f10C9N7q39f11IqKs/bHPDxW7r3XyVXP4qAf1o8+3bh7RVHrFIwP/j24Y/Cjmkt4/d/wbByQe0vv/wCBcrUVZ32X/Pvcf9/x/wDEVtf8Ir/0+/8AkL/69ZVcZSo29r7t/wCulzajgqte/sfetv0/OxyGpf8AHuv++P5Gsuu9ufB32iMJ9v24Oc+Tn/2aqn/CBf8AUS/8gf8A2VVSzjBRjZz/AAf+R72CwdanS5Zxs/VHG0Vt6rpdnol0ttcefdOyCQPHIIgASRjBVvTrnvVHz9PT5o7GZmHQTXG5fxCqp/UV6FPEKpFTpptPrp+rubuNnZlKirv9oKnMFjaRN3bYZOPTDlh+OM0f2tfjiK5eBf7tviJT74XAz71fNUe0fvf+SYrLuH9k3q/62DyPT7Q6w7vpvIz+FH2ayj/1uob89Ps8LNj679n6Z/CqVFHJN7y+5f53C67F37Zbw/8AHrZIG7PcN5rD8MBcfVT9emILi7uLraJ5ndUzsUn5U9lHQDpwPSoaKcaUE721+/8AMLsKKKK0EFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQB/9k=',
    'filemime' => 'image/jpeg',
    'filename' => 'imagefield_9VqCCH.jpg',
    'filesize' => 10073,
    'metadata' => array(
      'height' => 413,
      'width' => 522,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_9VqCCH.jpg',
    'uuid' => 'c2f61883-f61b-4b09-b528-7781ce6b5c4b',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/b1fb74cf-9ce3-440a-b2e2-964594a4170c',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Appellatio diam magna melior quidne ratis tamen. Cogo comis eros olim probo quadrum. Accumsan quadrum tation vereor. Adipiscing cogo facilisis imputo premo tego utrum valetudo vulpes. Accumsan blandit commoveo defui dolus laoreet molior tum vulpes. Diam esse magna neo plaga quidem sudo veniam wisi. Capto cui nisl proprius qui tamen validus. Damnum erat ratis. Blandit dolore duis exputo humo tamen. Abbas iustum jus. Abdo illum natu nunc. Dignissim enim humo iustum magna metuo utinam valde validus.</p>',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => 'c2f61883-f61b-4b09-b528-7781ce6b5c4b',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/jpeg',
          'filename' => 'imagefield_9VqCCH.jpg',
          'filesize' => 10073,
          'height' => 413,
          'metadata' => array(
            'height' => 413,
            'width' => 522,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_9VqCCH.jpg',
          'uuid' => 'c2f61883-f61b-4b09-b528-7781ce6b5c4b',
          'width' => 522,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2015-09-20 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<p>Elit gravis nisl persto. Autem elit euismod eum metuo populus sit. Quae tation tincidunt vindico. Acsi dolore ex huic loquor nibh secundum suscipit zelus. Bene camur minim. Erat eu quibus quis utinam. Illum vindico voco. Abbas aliquip conventio iriure os sino. Brevitas capto gravis natu olim. Facilisi genitus immitto odio paratus torqueo utrum vindico. Appellatio defui eu incassum obruo os. Aliquam genitus iusto magna modo patria secundum sino te typicus. At nostrud quidne refoveo roto sino sudo tation. Aliquip esse incassum jumentum loquor minim nunc. Aliquam cogo te. Dignissim persto praemitto vulpes. Abbas acsi defui dolor dolus ratis suscipit vulpes vulputate. Aliquip ideo nobis similis. Facilisis imputo inhibeo quadrum saepius sed vero. Acsi haero jus loquor nutus praesent saepius ulciscor utrum velit. Antehabeo consectetuer ille iriure tego torqueo. Brevitas consectetuer elit ex tum ullamcorper. Fere humo illum saepius similis vereor. Capto consectetuer cui mauris nulla pala quis ullamcorper virtus zelus. Aliquip dignissim dolore modo sudo suscipit. Camur capto consectetuer laoreet magna pagus torqueo. Gravis interdico nimis oppeto pecus persto plaga refoveo rusticus usitas. Dolore humo lenis patria utinam. Eum incassum loquor molior. Accumsan capto commoveo gilvus neo nunc populus sed sit tation. Aliquam eligo inhibeo lucidus os quibus saluto venio ymo. Abdo et patria virtus. Ea erat persto populus tamen. Defui facilisi immitto luptatum natu nibh nisl olim vel voco. Bene blandit commodo haero inhibeo iustum jus nibh validus vel. Eros jus meus neque. Elit luctus magna minim pertineo validus vel. Dolore haero incassum qui si sit vulpes. Abluo aliquam commoveo dolor eros pneum usitas. Augue autem brevitas diam sed uxor vulputate. Aliquam camur inhibeo patria quadrum sit. Quia si tego. Hendrerit praesent premo saepius saluto typicus. Appellatio facilisi gemino letalis nisl nulla refero sino tation zelus. Acsi cui pneum. Capto macto olim tincidunt. Exputo laoreet mos. Commodo commoveo consequat fere hendrerit zelus. Abico amet validus vulpes. Appellatio at facilisis gravis in pertineo sit tamen. Brevitas lucidus macto rusticus vel. Accumsan adipiscing augue dolore genitus odio.</p>',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/6',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 1,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Nets solgt til konsortium med Advent International, Bain Capital og ATP',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nets solgt til konsortium med Advent International, Bain Capital og ATP',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 0,
    'uuid' => 'b1fb74cf-9ce3-440a-b2e2-964594a4170c',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/ea456194-fab1-43c3-8274-709abcd4f0cd',
      'cause' => 'node/30aef95f-c61b-4172-a004-92d09bbd8717',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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',
    'filemime' => 'image/png',
    'filename' => 'imagefield_wyDSwf.png',
    'filesize' => 1580,
    'metadata' => array(
      'height' => 370,
      'width' => 288,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_wyDSwf.png',
    'uuid' => 'ea456194-fab1-43c3-8274-709abcd4f0cd',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/30aef95f-c61b-4172-a004-92d09bbd8717',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Causa ea ibidem luptatum nibh nobis paulatim quis roto ymo. Ex pneum quae si tamen. At occuro olim ratis valde validus. Aliquip decet jumentum refoveo volutpat. Inhibeo oppeto pneum typicus ullamcorper valde vel vindico zelus.

Exerci paulatim quidem tation veniam. Amet commoveo importunus metuo sagaciter zelus. Exputo neo nutus premo utinam zelus.

Abico blandit erat esse ille. Aliquam facilisis genitus paratus ratis sudo. Aptent caecus ludus voco. Ibidem jugis persto virtus. Ea elit erat hos interdico mos quibus si voco.

Consectetuer immitto ymo. Genitus obruo quadrum ullamcorper verto. Abico illum persto vel. Aliquam appellatio eligo iustum quis rusticus vereor verto vulpes.

Appellatio eu iusto refoveo ulciscor vulpes. Genitus nulla oppeto plaga probo quae suscipit. Humo incassum laoreet modo nostrud secundum valde. Adipiscing hendrerit praemitto quidne ratis zelus. Augue huic nimis nulla quae scisco. Augue lucidus luctus tation utrum zelus. Causa hendrerit luptatum nobis nulla refoveo. Acsi genitus iaceo mauris occuro pagus similis sino vindico.

Accumsan augue bene decet letalis luptatum pagus paulatim sagaciter. Aliquip brevitas causa dignissim esse jugis. Abluo decet incassum wisi. Iustum luctus tum virtus vulpes. Adipiscing at exerci facilisi lenis luctus suscipere torqueo ymo. Abico aptent immitto luctus plaga vindico.

Abico aliquam esca eum feugiat neque praesent. Ad causa ea iaceo laoreet. Diam facilisis inhibeo jugis probo quia quibus saepius tincidunt usitas.

Incassum pala rusticus. Abdo abluo huic illum importunus loquor mauris odio ymo. Caecus in macto vulpes. Abbas consequat decet gemino gravis letalis praemitto. Augue commodo consequat esse gilvus haero quidem saluto vero. Cogo feugiat ille iusto jus neo occuro tincidunt tum voco. Dignissim pala vereor. Cogo luptatum molior nunc torqueo virtus zelus. Cogo eligo hendrerit immitto incassum letalis lobortis torqueo virtus zelus.

Abbas abigo adipiscing appellatio dolore incassum pagus roto turpis vulputate. Causa enim facilisi hendrerit typicus. Abluo humo luptatum ulciscor velit. Antehabeo euismod humo incassum lucidus odio suscipit ymo. Causa lobortis voco. Eligo ideo jugis melior premo saluto singularis velit. Dolor elit haero hendrerit humo proprius sudo volutpat vulputate. Eu populus quae quidne. Appellatio brevitas iriure luctus saluto. Causa cui nisl tamen.

Aptent molior refoveo. Ad antehabeo dolore ex gemino quidne typicus vereor. Blandit feugiat inhibeo interdico iriure sed suscipere suscipit vero.

Consectetuer duis eligo et facilisis ille utinam valetudo. Abigo ea exputo interdico refoveo suscipit. Aliquam augue caecus gilvus minim olim praemitto. Elit feugiat hos ludus magna mauris ut. Commoveo duis facilisis gemino iustum laoreet neo oppeto.

',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => 'ea456194-fab1-43c3-8274-709abcd4f0cd',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/png',
          'filename' => 'imagefield_wyDSwf.png',
          'filesize' => 1580,
          'height' => 370,
          'metadata' => array(
            'height' => 370,
            'width' => 288,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_wyDSwf.png',
          'uuid' => 'ea456194-fab1-43c3-8274-709abcd4f0cd',
          'width' => 288,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2017-07-28 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Duis exputo lenis. Eum imputo ludus metuo nulla scisco ullamcorper. Exputo genitus ideo illum inhibeo iriure magna sudo. Damnum distineo euismod sit valde venio voco volutpat. Brevitas enim interdico jugis oppeto quadrum refoveo singularis. Huic illum inhibeo jugis suscipere valde. Accumsan haero utinam uxor velit venio. Abbas aptent diam dignissim iusto lenis nostrud quae utrum veniam.

Augue ex exputo luctus olim persto sagaciter usitas veniam. Blandit defui facilisis gilvus in letalis saluto sit. Paratus plaga validus vel. Abigo ex hos in lobortis sagaciter similis tum ymo. Abdo brevitas hendrerit melior qui sudo.

Jus paulatim sit. Ad comis tego. Ibidem iusto natu populus quidne sino utinam velit vicis. Diam quadrum si. Appellatio inhibeo jumentum ludus os quidem sudo torqueo valde. Huic refero ulciscor vero. Duis imputo nulla quae. Conventio minim plaga refoveo sino. Abdo antehabeo causa damnum feugiat huic laoreet sit usitas.

Camur defui haero illum natu sit sudo. Distineo erat iustum ludus luptatum refoveo tincidunt vicis vindico voco. Abdo augue eros hendrerit modo secundum tamen typicus virtus. Camur feugiat huic minim natu patria saepius sudo ullamcorper. Adipiscing commodo conventio ea huic illum neque populus quia refero. Aliquam eligo fere praesent refoveo validus. Cogo dolor nulla sagaciter similis verto.

Defui eu exputo facilisi immitto iustum jus mauris praesent tincidunt. Cogo nisl vero. Aliquip autem erat refero roto usitas valde. Amet at causa exerci hos loquor tincidunt.

Consectetuer erat exputo haero nimis pagus sed ullamcorper. Feugiat hos olim. Ad augue facilisis genitus patria refero sed. Abigo at iustum praesent.

Causa inhibeo lobortis macto neo nulla odio pecus quidem. Eros ideo lucidus validus. Ideo importunus quadrum uxor. Conventio lucidus mauris melior tum usitas. Antehabeo camur facilisis illum letalis metuo os plaga tum vero.

At decet eligo suscipere uxor vero. Blandit gravis praemitto quae tum typicus. Haero lucidus luptatum obruo quia suscipit torqueo ullamcorper. At occuro praesent. Distineo duis eu natu neo plaga tum voco. Acsi comis inhibeo minim nostrud nutus praemitto tincidunt typicus virtus. Aliquam appellatio comis hos sagaciter saluto valetudo. Amet commoveo ille jus melior oppeto quidne vel vero voco.

',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/5',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Ny koncernfinansdirektør i ATP Koncernen',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Ny koncernfinansdirektør i ATP Koncernen',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 0,
    'uuid' => '30aef95f-c61b-4172-a004-92d09bbd8717',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/43aa19b6-03ec-4292-a13e-c5227d3a8288',
      'cause' => 'node/6d4c9535-a759-4012-ab80-8b4660886141',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => '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cugEdvYqsC3l63l2pyVVXAkm5xhR1AyCN5G0YPUjaYru7+0bI408q2iz5UQOcZ6knuxwMn2AGAABHcXE93O09zNJNM2N0kjFmOBjkn2qKkl1YBRRRVAFFFFABRRRQB7HRRRX5Cfj4UUUUAFFFFABRRRQAU+OV487W4PUEZB+oPBplFNNp3Q4ycXeLsyb9zL/ANMW/Er/AIj9fwprwSKpcDdGP415H/1voeajpUdkYMjFWHQg4NXzRfxL7v6/yNOeMvjXzX+W35CUVN5yv/rYUPunyH9OP0o2QP8AdkMZ9JBkfmP8KORP4X+n/A/EPZp/DJfl+en4kNFTfZpD9zY/oEYEn8Ov6UySKSLHmRumem5SM0nTmldoUqVSKu4uwyiiioMzxyiiiv14/YAoqe1srq+lMVpbTXEgXcUhjLkD1wO3Iq3/AGBqK8Twx2rdku544HI9QsjAke+McH0pOUVuwuZtFaX2TTLf5p9T+09wlnE3OOzNIF257EBu/HGCf2jZ2/8Ax46bGrdRLdt57qe+BgIRj1QnknPTC5uyFcgtdLvbyIzQ27eQrbWnchIlPoXbCg8jqe49an8rTLL5pJ/7Ql6qkAaOL23MwDHpyoA4PDg8VUury4vZRJcytIyrtUHoi9lUdFUZ4AwBUFFm9wLd1qVxdRCAlYrZW3LbwjbGD0Bx/E2ONzZYjqTVSiimklsMKKKKYBRRRQAUUUUAFFFFAHsdFFFfkJ+PhRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABT45ZIs+XI6Z67WIzTKKabTuhxk4u8XZk32qc/ekLj0k+YfkaPtMn92L/v0v+FQ0Vftan8z+809vV/mf3s8u/t27/wCeOn/+C63/APiKP7f1Nf8AUXP2T1+xxrb7v97ywu7HbOcZPrWbRX6xyR7H61ZFu61XUb6IRXd/dXEYbcEmmZwD64J68mqlFFNJLYYUUUUwCiiigAooooAKKKKACiiigAooooAKKKKAPY6KKK/IT8fCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA8cooor9eP2AKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigD2OiiivyE/HwooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAPHKKKK/Xj9gCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA9jooor8hPx8KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigDxyiiiv14/YAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKAPY6KKK/IT8fCiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA8cooor9eP2AKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigD//2Q==',
    'filemime' => 'image/jpeg',
    'filename' => 'imagefield_GzHAKZ.jpeg',
    'filesize' => 6472,
    'metadata' => array(
      'height' => 419,
      'width' => 288,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_GzHAKZ.jpeg',
    'uuid' => '43aa19b6-03ec-4292-a13e-c5227d3a8288',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/6d4c9535-a759-4012-ab80-8b4660886141',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Antehabeo elit eros ludus neque nobis qui scisco. Dolore euismod imputo nibh nostrud pecus premo voco volutpat vulputate. Enim imputo macto os paulatim populus. Dolor hendrerit nostrud obruo rusticus valetudo. Brevitas erat qui refero vel velit zelus. Appellatio blandit ullamcorper. Eligo gemino pertineo vereor. Immitto jumentum quibus. At cui nostrud tation te validus volutpat.

Ad bene defui distineo dolor laoreet meus praesent quae quidne. Abdo antehabeo camur cogo hendrerit premo. Feugiat humo neque quis ratis validus.

Imputo populus sit tum. Abbas dolus euismod immitto interdico meus wisi. Abbas consequat euismod tego torqueo. Esca illum molior nibh te tincidunt uxor. Autem capto enim importunus nimis nobis. Eros euismod facilisi ideo velit. Abbas amet ea eligo gravis olim tego validus volutpat.

Lobortis nulla saepius te turpis typicus vindico. Conventio eros huic jumentum mauris oppeto pneum praemitto quidem. At bene causa cogo loquor praemitto sit ymo. Diam ea feugiat genitus jumentum melior oppeto qui venio. Abdo brevitas euismod ideo importunus luctus neo paulatim pertineo saluto. Luctus ludus qui saluto voco. At facilisi humo nisl pala. Conventio esca lenis. Quia roto similis.

Ex minim paulatim venio vulpes. At capto jus mos neo obruo patria ulciscor vicis. Conventio diam gemino paulatim proprius verto. Lobortis melior olim os utrum. Augue et gilvus pagus. Cogo comis commodo consectetuer consequat feugiat mos sed veniam. Cui hendrerit iriure nibh pagus pecus ullamcorper usitas ut verto.

Abluo brevitas commoveo persto quae. Abbas amet capto damnum humo inhibeo lucidus roto sed utinam. Hendrerit illum natu saluto scisco suscipere torqueo valde virtus. Camur jumentum nimis pala praemitto. Ad bene caecus esse facilisi incassum lobortis natu neque nobis.

',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => '43aa19b6-03ec-4292-a13e-c5227d3a8288',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/jpeg',
          'filename' => 'imagefield_GzHAKZ.jpeg',
          'filesize' => 6472,
          'height' => 419,
          'metadata' => array(
            'height' => 419,
            'width' => 288,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_GzHAKZ.jpeg',
          'uuid' => '43aa19b6-03ec-4292-a13e-c5227d3a8288',
          'width' => 288,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2013-11-12 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Antehabeo iustum nostrud. Fere mauris molior premo. Camur commoveo dignissim enim gilvus in paratus scisco usitas vulputate. Inhibeo nobis olim probo virtus. Damnum eum praesent quia zelus. Conventio nulla uxor verto.

Amet enim paratus volutpat. Conventio feugiat minim qui quidem utinam. Aliquam amet elit ex iaceo similis ullamcorper virtus. Aptent capto immitto populus quadrum qui similis turpis. Esse exputo ideo oppeto pertineo pneum tamen. Appellatio iriure ullamcorper. Adipiscing cui esca ideo importunus incassum quidem saepius turpis vulputate. Iriure metuo sudo ullamcorper utinam. Amet aptent commodo eros pala saluto. Ad dignissim eros nulla paulatim proprius rusticus sagaciter torqueo.

Ex gravis haero iustum nimis typicus zelus. Importunus modo premo. Abico conventio in melior. Aliquip conventio exputo humo lobortis pneum populus turpis veniam voco. Damnum jus mos oppeto quidem similis sudo. Gemino imputo nutus vel.

Iustum lucidus macto meus. Diam gemino scisco ullamcorper. At inhibeo pecus. Antehabeo capto causa feugiat hos neo olim pagus praemitto validus. Consequat dolore hos. Abico exerci iusto scisco typicus. Defui distineo jus melior quidne tego ut uxor vero. Distineo dolor dolus ex exputo in proprius ulciscor voco.

Cogo immitto utrum verto voco. Hendrerit premo singularis vero vulputate. Exerci ideo nutus obruo praemitto roto rusticus saluto. Eu facilisis iaceo in paratus praemitto singularis vindico. Camur gravis jumentum quidne vulpes. At facilisi facilisis mauris pertineo plaga.

Augue caecus feugiat probo quae. Abigo importunus modo ullamcorper. Abbas appellatio comis commoveo duis loquor neo vulpes. Commodo feugiat melior. Abigo aliquam dignissim hendrerit mauris oppeto vulputate.

',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/11',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Datasikkerhed i ATP',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Datasikkerhed i ATP',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 0,
    'uuid' => '6d4c9535-a759-4012-ab80-8b4660886141',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/7646bb65-90b6-4f6f-b280-0c050d576b58',
      'cause' => 'node/8b8542c5-caa6-458e-9ae5-c6abcd101838',
    ),
    'alt' => '',
    'field_file_image_alt_text' => array(),
    'field_file_image_title_text' => array(),
    'file_contents' => 'iVBORw0KGgoAAAANSUhEUgAAAUoAAACWBAMAAABKjNzWAAAAD1BMVEUI1L24WLS5Yf4sTwCeC+LWmULHAAADCUlEQVR4nO3UYU4CQQwFYEm4wCacALkBHGDEvf+ZBEVhmU47fa+6ZtL+UQiBL++1+/ISOtv5NlPoBBPL5c/m+r2x0Ehj+fpnc/vqQGe48a4MdAYh78ZH5cX59o+U8+OLR+W0C2FGGLcL5FI57SJaj0CW5evN008EMOORlTKAGY+slTyTVlZIQTmxJ8Qi5/otQcleOoncCu8Jymm3prJeyoaSXE1OKSFlJbeaFFJYyqaSWk0GKS1lU0mtJqMsLiXTOYFsRNlUEmESyuJUEmHiSPl0NCV+QDCy1beixDuHlQVQwp2jyHaUmhINE1UWSImGObRSKVxVgpWDygIqwTAxpBalrsTCxJQFVmJhQkg1SkMJhTmwshBKqHIEqUdpKZEwx1UWSolUDiCNKE0lEOawykIqgcr9SCtKW+kPc1RloZX+ygdVmoV3KN2VD6osAUp35alcT2mvZY/Su5hjKkuI0lt5KldTdqxll9K5mKlMpTolSOk8n1SmUpue4+lT+s4nlalM5d8oS5jS9yhKZSpTmcp/oNx75tzzoddjz7x3feo2qUxlKlOZyt9QHsKUJw8ylalM5R8pux5FXUrXgyiVqdSn53x6lL7jSWUqjTnHKH3Hk8oVlR2L2aF0ruWgyo7KO5TOwlO5ptJeTFvpXctRlXblttJb+LBKs3JT6S58WKVZual0F44orTAtpT/KcZVW5ZbSXzikNMI0lECUAyuNyg0lUDim1MPUlUiUIyv1ynUlUjioVMNUlVCUoFINU1VCUaJKLUxNiUWJKrUwNSUW5eBKpXJFCRYOK5UwFSUYJa5sh9lWolHiyv3sVp7QKAlls/OmEkYyylbnLSXcN6VshdlS4lFSykaYDSURJaVsHJCsxE+HVcqdy0oGSSoPElNUzgySVIqrKSmZpeSV0moKSmopA5TCagpKEskr69WsldxSRihrZqWkkQHKivms5JERyv1heUJL5SkAGaJ8uvSFkr3uSOV+PsvKOQQZpby0/uO8K+eItiOVD85vZZgxUnl1fkJfv4hxxuPxA0hywJ1Sum6WAAAAAElFTkSuQmCC',
    'filemime' => 'image/png',
    'filename' => 'imagefield_J62Uho.png',
    'filesize' => 861,
    'metadata' => array(
      'height' => 150,
      'width' => 330,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public:///imagefield_J62Uho.png',
    'uuid' => '7646bb65-90b6-4f6f-b280-0c050d576b58',
  );
  $entities['atp_test_content_news'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8b8542c5-caa6-458e-9ae5-c6abcd101838',
      'cause' => FALSE,
    ),
    'comment' => 0,
    'field_news_body' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Abico acsi adipiscing eros mauris oppeto paratus patria quadrum. Abico secundum uxor. Elit erat jugis jus letalis luctus quadrum. Adipiscing at paratus quibus utrum velit. Brevitas capto conventio esse gravis iriure nutus populus ulciscor ymo.

Hos ibidem quia quidne. Comis eligo letalis luctus nutus praesent saepius sit velit wisi. Abdo appellatio iusto os pala ratis si sino. Abigo commodo hos natu. Haero metuo tum turpis vulpes. Defui laoreet letalis nulla valde velit vereor. Abigo nimis validus volutpat.

Euismod incassum loquor obruo odio paratus roto utinam. Elit illum os quis torqueo velit. Lenis natu nobis quadrum quia rusticus. Abigo aliquip bene caecus camur nulla odio populus sudo vero. Hos pala quibus sit. Camur et humo loquor paulatim praemitto saluto singularis utinam. Damnum exputo ille immitto vereor vero. Distineo erat humo luptatum pagus patria sit volutpat.

Iaceo importunus neque odio sino tincidunt. Enim hendrerit letalis pneum praesent quidne. Blandit cui hos mos nulla quadrum similis.

Blandit causa erat eum luctus neo pala velit vindico. Cui persto scisco tamen. Abbas abluo iriure venio ymo. Commodo consectetuer in mauris nunc pagus plaga usitas vel. Bene comis quidne ymo.

Abluo cogo cui loquor lucidus magna praemitto praesent vel vero. Capto iustum probo quibus utinam. Loquor nutus saluto secundum tincidunt volutpat vulpes. Ex exputo iaceo probo utrum. Abbas aliquam amet iaceo ibidem letalis roto ymo. Enim meus obruo praesent vindico. Antehabeo jus macto molior praemitto volutpat. Appellatio brevitas commodo commoveo neque tincidunt torqueo validus vindico ymo.

Aliquip dolore enim. Abbas aliquam commoveo conventio facilisi gilvus oppeto refoveo rusticus. Abbas abico appellatio comis iaceo quadrum quibus sudo valetudo. Abbas consectetuer conventio iusto iustum nobis nulla premo valde. Eu hendrerit ibidem interdico luctus metuo. Aptent commoveo jugis macto utinam vero.

Aliquip gravis jumentum premo qui zelus. Aptent eligo hendrerit huic luctus neo occuro probo tincidunt volutpat. Bene gravis metuo secundum. Hendrerit in inhibeo mos neque roto rusticus vel veniam. Jus magna populus te. Capto cui eros genitus. Metuo probo venio. Iustum neo similis ullamcorper. Acsi dolore importunus incassum utinam. Commoveo decet macto meus pertineo similis torqueo tum valde.

Augue decet iustum ullamcorper wisi. Haero quae sed velit. Consectetuer genitus ideo incassum persto refoveo tation ulciscor. Ideo nobis refero roto turpis usitas. Melior os quidne sagaciter vulputate. Cogo eros imputo jugis ullamcorper volutpat. Amet damnum genitus nunc pala pecus te. Conventio humo neo refoveo vicis vindico vulputate ymo.

Consectetuer consequat dolus ideo incassum luctus minim nulla ut vulputate. Damnum facilisis jus utinam. Aliquam bene duis ea erat neo saepius velit vulpes ymo.

Eligo gravis minim. Accumsan aptent suscipere. Aliquam aptent feugiat genitus hos immitto paulatim sagaciter veniam vulpes. Augue blandit eligo jumentum luctus ludus nostrud uxor.

',
        ),
      ),
    ),
    'field_news_categories' => array(),
    'field_news_image' => array(
      'und' => array(
        0 => array(
          'alt' => NULL,
          'fid' => '7646bb65-90b6-4f6f-b280-0c050d576b58',
          'field_file_image_alt_text' => array(),
          'field_file_image_title_text' => array(),
          'filemime' => 'image/png',
          'filename' => 'imagefield_J62Uho.png',
          'filesize' => 861,
          'height' => 150,
          'metadata' => array(
            'height' => 150,
            'width' => 330,
          ),
          'rdf_mapping' => array(),
          'status' => 1,
          'title' => NULL,
          'type' => 'image',
          'uid' => 1,
          'uri' => 'public:///imagefield_J62Uho.png',
          'uuid' => '7646bb65-90b6-4f6f-b280-0c050d576b58',
          'width' => 330,
        ),
      ),
    ),
    'field_news_publishdate' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'Europe/Copenhagen',
          'timezone_db' => 'Europe/Copenhagen',
          'value' => '2014-07-10 00:00:00',
        ),
      ),
    ),
    'field_news_summary' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Adipiscing dolus exputo facilisis illum olim quadrum secundum suscipere. Commodo iustum suscipere. Consectetuer conventio dolor haero minim occuro quidem rusticus tamen vicis. Abdo abluo eros exerci gemino hendrerit venio.

Ad appellatio autem occuro quibus quidem quidne valetudo vel. Distineo facilisi paulatim persto quis. Haero lucidus valde. Ad sudo vero. Iusto metuo neo sagaciter scisco tamen ymo. Augue causa roto. Gemino illum iusto letalis ludus occuro ratis sino suscipit zelus.

Genitus proprius quae. Commodo diam ex facilisi pala patria. Autem enim exerci olim persto populus rusticus singularis utinam volutpat. Aptent camur ibidem importunus iustum luctus saluto voco.

Comis esse ille interdico pneum secundum wisi. Aliquip gilvus importunus lucidus ludus olim singularis. Aptent lucidus wisi. Aptent cogo facilisi gravis lucidus mauris praesent rusticus suscipit vicis. Cogo conventio enim loquor metuo minim modo natu suscipit validus. Abico dolore elit nostrud nutus vicis. Conventio defui eum macto olim praesent sagaciter similis. Duis nisl tamen vereor vindico. Abigo pecus pertineo premo sudo suscipere voco.

Importunus pagus saepius sudo. Ea ideo nunc patria quae quia tincidunt validus. Commodo mauris metuo quis. Abdo elit immitto lobortis neo quia sed ullamcorper valetudo vulpes.

Decet ea imputo ymo. Abico cogo commoveo diam ex tincidunt veniam. Damnum duis probo. Ex imputo in plaga rusticus secundum torqueo. Commodo neque sino. Iaceo pneum praemitto proprius quibus roto si sudo ullamcorper.

Iriure iusto quadrum. Cogo ex gilvus proprius sagaciter similis sudo.

Dolus quibus refero. Eros inhibeo macto quadrum refoveo similis vulpes. Aptent camur diam distineo facilisi luctus obruo si sit. Abluo cogo damnum imputo nulla tego typicus vicis.

Appellatio cui importunus jugis obruo roto voco. Gravis molior pagus probo suscipit tincidunt. Appellatio camur conventio imputo luctus occuro paulatim suscipere. Erat gravis ibidem luctus oppeto populus quadrum rusticus tation. Abico blandit decet duis pertineo sed tamen tation. Abluo bene gemino iriure iustum lucidus mauris probo. Aliquam dolor eligo exputo immitto natu tum usitas.

Comis probo sed vereor. Distineo interdico praemitto tamen. Brevitas cui eligo jugis. Appellatio ex ille metuo mos nulla nutus premo sudo valetudo. Defui dolor feugiat neque persto praesent qui rusticus si sit. Conventio jus metuo os patria premo sit uxor voco. Hos nobis pagus vicis virtus ymo. Abico autem cogo jugis modo quae qui scisco.

Eum fere nimis nulla persto quae valde veniam vero vulputate. Abico comis importunus nobis quidne tego vero. Abico duis huic modo nimis premo quidne tamen utrum.

Facilisi ideo mauris. Dignissim dolor hendrerit lucidus molior nibh nimis paratus. Acsi aliquam comis diam gemino interdico. Bene camur cogo fere loquor nibh singularis tego volutpat. Haero humo luctus praemitto quadrum wisi. Adipiscing aliquam ea esca gilvus iaceo illum modo paulatim. Feugiat incassum ludus qui quia ulciscor valetudo. Antehabeo imputo nimis pecus refero virtus. Consequat enim exputo lenis lobortis nunc ratis saepius secundum suscipere.

',
        ),
      ),
    ),
    'language' => 'da',
    'log' => 'Edited by adaptadmin.',
    'path' => array(
      'pid' => NULL,
      'source' => 'node/14',
      'alias' => '',
      'language' => 'da',
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'ATP byder velkommen til ny formand i DONG Energy',
    'title_field' => array(
      'da' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ATP byder velkommen til ny formand i DONG Energy',
        ),
      ),
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'value' => 'Lenis',
        ),
      ),
    ),
    'tnid' => 0,
    'translate' => 0,
    'type' => 'news',
    'uid' => 1,
    'uuid' => '8b8542c5-caa6-458e-9ae5-c6abcd101838',
  );

  return $entities;
}
