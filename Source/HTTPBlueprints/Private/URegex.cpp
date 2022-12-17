// 


#include "URegex.h"

FString UURegex::findMatch(FString pattern, FString text) {
	FRegexPattern regexPattern(pattern);
	FRegexMatcher regexMatcher(regexPattern, text);
	if (regexMatcher.FindNext()) {
		return regexMatcher.GetCaptureGroup(0);
	}
	return "";
}

FString UURegex::replaceMatch(FString pattern, FString text, FString replace) {
	// Replaces all matches of the pattern in the text with the replace string
	FRegexPattern regexPattern(pattern);
	FRegexMatcher regexMatcher(regexPattern, text);

	// Find all matches
	TArray<FString> matches;
	while (regexMatcher.FindNext()) {
		matches.Add(regexMatcher.GetCaptureGroup(0));
	}

	// Replace those matches
	for (FString match : matches) {
		text.ReplaceInline(*match, *replace);
	}

	// Return the text
	return text;
}
