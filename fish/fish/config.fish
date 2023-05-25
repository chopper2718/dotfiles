set fish_greeting

if status is-interactive
    # Commands to run in interactive sessions can go here
end

function fish_prompt
    echo -en '\033[36m['(prompt_pwd)']\033[0m\033[35m λ '
end
