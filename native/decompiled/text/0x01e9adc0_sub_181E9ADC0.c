// sub_181E9ADC0
// rva 0x01e9adc0  size 287  section .text  group text
// window base 0x181e9adc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181E9ADC0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  char v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v12 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
LABEL_17:
    v13 = a5;
    v12 = a3;
    MEMORY[0x182771080]();
    goto LABEL_18;
  }
  if ( v6 + 376656816 == a5
    || v6 + 376656216 == a5
    || v6 + 376656048 == a5
    || v6 + 376656848 == a5
    || v6 + 376656880 == a5
    || v6 + 376656912 == a5 )
  {
    v13 = a5;
    v12 = a3;
    if ( *(int *)(v7 + 16) > 0 )
      return;
LABEL_14:
    MEMORY[0x18277F280]();
    return;
  }
  v8 = *(unsigned int *)(v6 + 376654972);
  if ( (_DWORD)v8 == 0 )
    goto LABEL_17;
  v9 = *(_DWORD *)(v6 + 8 * v8) >> 3;
  v10 = *(_DWORD *)(v6 + 8 * v9 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v6 + 8 * v9 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v9 + 20) + 4 * v10 + 12) != 519 )
  {
LABEL_18:
    MEMORY[0x182770780]();
    __builtin_debugtrap();
    sub_181E9AEE0();
    return;
  }
  v13 = a5;
  v12 = a3;
  MEMORY[0x181E78960](a1, a2: v10, a3: v6 + 8 * v8);
  if ( *(int *)(v7 + 16) <= 0 )
    goto LABEL_14;
}
