#### IllusionFlow64

IllusionFlow64 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to JSF64, both RXS M XS and XSL RR RR variants of PCG64, Xoroshiro128**, Xoroshiro128+, Xoroshiro128++, Xoshiro256**, Xoshiro256+ and Xoshiro256++.

It has a period of at least 2²⁵⁶.

Each state integer must be assigned a seed. Seeding `e` with non-overlapping integers and seeding the remaining state with overlapping integers behaves as a jump function with up to 2⁶⁴ parallel instances that each have a non-overlapping period of at least 2⁶⁴. The first several results from each parallel instance should be skipped.

##### C

`illusionFlow64` generates and returns a pseudorandom `uint64_t` integer, provided the implementation supports a 64-bit, unsigned integral type for `uint64_t`.

##### C#

`Next` from `IllusionFlow64` generates and returns a pseudorandom `ulong` integer.

---

#### IllusionFlow32

IllusionFlow32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to JSF32, Xoroshiro64*, Xoroshiro64**, Xoshiro128**, Xoshiro128+ and Xoshiro128++.

It has a period of at least 2¹²⁸.

Each state integer must be assigned a seed. Seeding `e` with non-overlapping integers and seeding the remaining state with overlapping integers behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

##### C

`illusionFlow32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t`.

##### C#

`Next` from `IllusionFlow32` generates and returns a pseudorandom `uint` integer.

---

#### IllusionFlow16

IllusionFlow16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to JSF16 and all 16-bit variants of both Xoroshiro and Xoshiro that have a period of 2⁶⁴ or less.

It has a period of at least 2⁶⁴.

Each state integer must be assigned a seed. Seeding `e` with non-overlapping integers and seeding the remaining state with overlapping integers behaves as a jump function with up to 2¹⁶ parallel instances that each have a non-overlapping period of at least 2¹⁶. The first several results from each parallel instance should be skipped.

##### C

`illusionFlow16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `IllusionFlow16` generates and returns a pseudorandom `ushort` integer.

---

#### IllusionFlow8

IllusionFlow8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to JSF8 and all 8-bit variants of both Xoroshiro and Xoshiro that have a period of 2³² or less.

It has a period of at least 2³².

Each state integer must be assigned a seed. Seeding `e` with non-overlapping integers and seeding the remaining state with overlapping integers behaves as a jump function with up to 2⁸ parallel instances that each have a non-overlapping period of at least 2⁸. The first several results from each parallel instance should be skipped.

##### C

`illusionFlow8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t`.

##### C#

`Next` from `IllusionFlow8` generates and returns a pseudorandom `byte` integer.
