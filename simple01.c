function PromptForCommand {
    param (
        [string]$prompt
    )

    # Loop until the "end of file" condition is encountered
    while ($true) {
        try {
            # Display the prompt and wait for user input
            Write-Host -NoNewline $prompt
            $command = Read-Host

            # Check if the user entered Ctrl+D to exit the program
            if ($command -eq $null) {
                break
            }

            # Execute the command using the Start-Process cmdlet
            Start-Process -FilePath $command -ErrorAction Stop

            # Display the prompt again
            Write-Host
        }
        catch {
            # Display an error message if the command is not found or an error occurs
            Write-Host "Error: $_"
            Write-Host
        }
    }
}

# Usage example for the PromptForCommand function
PromptForCommand "Enter a command:"
