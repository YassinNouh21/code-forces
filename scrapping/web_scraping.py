
import requests
from bs4 import BeautifulSoup

content = requests.get(
    'https://www.futurelearn.com/subjects/it-and-computer-science-courses/web-development')

soup = BeautifulSoup(content.text, 'lxml')

courses_name = soup.find_all("h3", {"class": "heading-module_wrapper__2dcxt heading-module_sBreakpointAlignmentleft__pCA_Y heading-module_sBreakpointSizemedium__8ELNW heading-module_black__Uge9G heading-module_isCompact__fVqKY"})
courses_duration = soup.find_all("p", {"class": "text-module_wrapper__FfvIV text-module_coolGrey__3nOqf text-module_sBreakpointSizexsmall__2Jlmd text-module_sBreakpointAlignmentleft__1MvbB text-module_isRegular__1K97K"})
print(courses_duration)
