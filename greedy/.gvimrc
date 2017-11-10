filetype on
filetype indent plugin on
syntax enable
set autochdir
set expandtab
set cindent
set nu
set shiftwidth=4
set softtabstop=4
set guifont=Monospace\ 11
set mouse=a
set guioptions+=m
autocmd BufEnter * silent! :lcd%:p:h
map <F8> :!g++ -g  % && ./a.out <CR>
map <F5> :!g++ -g % <CR>
map <F2> :w <CR>
map <F12> :!gdb ./a.out <CR>
nnoremap <C-Left> :tabprevious<CR>
nnoremap <C-Right> :tabnext<CR>

