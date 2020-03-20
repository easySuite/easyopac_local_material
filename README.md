# easyOPAC Local Material

## Description
Module developed for importing Ting objects into local database and use them as a local content.
This module includes search and facets functionality.
On the module installation the default frontpage will be changed to match `search/node/*` page.

## Installation
1. Enable `easyOPAC Local Material` module from `/admin/modules` page.
2. Ensure `easyopac_local_material` feature is reverted to default state.
3. Clear cache.

## Usage
After module is installed, the ting objects must be imported manually.
In order to import ting objects we have to go to `admin/config/local-material/import` page and click `Start import` button.
The import batch will start with progress display. Once import process is finished corresponding message will be shown.

## Known issues and solutions for them
- Issue: _The frontpage panel page is not accessible._

  Solution: Clear cache

- Issue: _Materials import has finished, but the content on search page is still missing._

  Solution: The Search API server database tables wasn't rebuilt on feature revert, so:
    1. Go to `/admin/config/search/search_api/index/local_material_index/edit` -> set `Server` field value to `< No server >` -> click `Save settings`.
    2. Go again to `/admin/config/search/search_api/index/local_material_index/edit` -> set `Server` field value to `Local Materials Server` -> click `Save settings`.
    3. Enable `Local Materials Index`. This can be done by clicking `(enable)` link on the `Index status` page on `/admin/config/search/search_api/index/local_material_index`.
    4. Click `Index now` button on `/admin/config/search/search_api/index/local_material_index` page or run Cron.
