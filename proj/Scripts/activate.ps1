<<<<<<< HEAD
$script:THIS_PATH = $myinvocation.mycommand.path
$script:BASE_DIR = Split-Path (Resolve-Path "$THIS_PATH/..") -Parent

function global:deactivate([switch] $NonDestructive) {
    if (Test-Path variable:_OLD_VIRTUAL_PATH) {
        $env:PATH = $variable:_OLD_VIRTUAL_PATH
        Remove-Variable "_OLD_VIRTUAL_PATH" -Scope global
    }

    if (Test-Path function:_old_virtual_prompt) {
        $function:prompt = $function:_old_virtual_prompt
        Remove-Item function:\_old_virtual_prompt
    }

    if ($env:VIRTUAL_ENV) {
        Remove-Item env:VIRTUAL_ENV -ErrorAction SilentlyContinue
    }

    if (!$NonDestructive) {
        # Self destruct!
        Remove-Item function:deactivate
        Remove-Item function:pydoc
    }
}

function global:pydoc {
=======
# This file must be dot sourced from PoSh; you cannot run it directly. Do this: . ./activate.ps1

$script:THIS_PATH = $myinvocation.mycommand.path
$script:BASE_DIR = split-path (resolve-path "$THIS_PATH/..") -Parent

function global:deactivate([switch] $NonDestructive)
{
    if (test-path variable:_OLD_VIRTUAL_PATH)
    {
        $env:PATH = $variable:_OLD_VIRTUAL_PATH
        remove-variable "_OLD_VIRTUAL_PATH" -scope global
    }

    if (test-path function:_old_virtual_prompt)
    {
        $function:prompt = $function:_old_virtual_prompt
        remove-item function:\_old_virtual_prompt
    }

    if ($env:VIRTUAL_ENV)
    {
        $old_env = split-path $env:VIRTUAL_ENV -leaf
        remove-item env:VIRTUAL_ENV -erroraction silentlycontinue
    }

    if (!$NonDestructive)
    {
        # Self destruct!
        remove-item function:deactivate
        remove-item function:pydoc
    }
}

function global:pydoc
{
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
    python -m pydoc $args
}

# unset irrelevant variables
deactivate -nondestructive

$VIRTUAL_ENV = $BASE_DIR
$env:VIRTUAL_ENV = $VIRTUAL_ENV

<<<<<<< HEAD
New-Variable -Scope global -Name _OLD_VIRTUAL_PATH -Value $env:PATH

$env:PATH = "$env:VIRTUAL_ENV/Scripts;" + $env:PATH
if (!$env:VIRTUAL_ENV_DISABLE_PROMPT) {
    function global:_old_virtual_prompt {
        ""
    }
    $function:_old_virtual_prompt = $function:prompt

    if ("" -ne "") {
        function global:prompt {
            # Add the custom prefix to the existing prompt
            $previous_prompt_value = & $function:_old_virtual_prompt
            ("" + $previous_prompt_value)
        }
    }
    else {
        function global:prompt {
            # Add a prefix to the current prompt, but don't discard it.
            $previous_prompt_value = & $function:_old_virtual_prompt
            $new_prompt_value = "($( Split-Path $env:VIRTUAL_ENV -Leaf )) "
            ($new_prompt_value + $previous_prompt_value)
=======
$global:_OLD_VIRTUAL_PATH = $env:PATH
$env:PATH = "$env:VIRTUAL_ENV/Scripts;" + $env:PATH
if (!$env:VIRTUAL_ENV_DISABLE_PROMPT)
{
    function global:_old_virtual_prompt
    {
        ""
    }
    $function:_old_virtual_prompt = $function:prompt
    if ("" -ne "")
    {
        function global:prompt
        {
            # Add the custom prefix to the existing prompt
            write-host "" -nonewline
            & $function:_old_virtual_prompt
        }
    }
    else
    {
        function global:prompt
        {
            # Add a prefix to the current prompt, but don't discard it.
            write-host "($( split-path $env:VIRTUAL_ENV -leaf )) " -nonewline
            & $function:_old_virtual_prompt
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
        }
    }
}
