---
layout: presentation
---

# [](#header-1) Generate a Square Wave

```python
tone_frequency = 500
tone_half_period = 1.0/(2*tone_frequency)
while True:
   togglePin()
   time.sleep(tone_half_period)
```

[![](assets/img/jitter.png)](arduino)
