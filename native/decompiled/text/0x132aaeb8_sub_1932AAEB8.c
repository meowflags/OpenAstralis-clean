// sub_1932AAEB8
// rva 0x132aaeb8  size 520  section .text  group text
// window base 0x1932aaeb8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_1932AAEB8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11)
{
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rsi
  int v40; // eax
  int v41; // r9d
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rsi
  _DWORD v46[10]; // [rsp+30h] [rbp-28h] BYREF

  v13 = sub_1932AECD4(a1: a5, a2: a4, a3: 1, a4: 2);
  v16 = v13;
  if ( v13 == -1 )
  {
    v17 = MEMORY[0x79958](a1: v14, a2: v15);
    sub_1932AED0C(a1: v18, a2: v19, a3: v17, a4: v19, a5: 537368);
    return 0;
  }
  if ( a11 > 0 && (unsigned int)MEMORY[0x799F0](a1: v14, a2: v15, a3: 0, a4: v13, a5: 4, a6: &a11) == -1 )
  {
    v21 = MEMORY[0x79958](a1: v14, a2: v15);
    v24 = 537392;
LABEL_7:
    sub_1932AED0C(a1: v22, a2: v23, a3: v21, a4: v23, a5: v24);
LABEL_8:
    MEMORY[0x79A00](a1: v26, a2: v27, a3: v25, a4: v16);
    return 0;
  }
  if ( v14 != 0 && (int)MEMORY[0x79920](a1: v14, a2: v15, a3: v14, a4: v16, a5: 16) < 0 )
  {
    v21 = MEMORY[0x79958](a1: v28, a2: v29);
    v24 = 537424;
    goto LABEL_7;
  }
  v30 = MEMORY[0x79A18]();
  MEMORY[0x79988](a1: v30, a2: v31, a3: v30, a4: v16, a5: 49);
  *(_WORD *)(a3 + 2) = MEMORY[0x79968](a1: v33, a2: v34, a3: v32, a4: 7);
  v46[0] = MEMORY[0x799D8](a1: v35, a2: v36, a3, a4: v16, a5: 16);
  if ( v46[0] != 0 && (unsigned int)MEMORY[0x79958](a1: v38, a2: v39) != 10061 )
  {
    v40 = MEMORY[0x79958](a1: v38, a2: v39);
    if ( v40 != 10035 )
    {
      if ( v40 != 10046 && v40 != 10050 && v40 != 10051 && v40 != 10065 )
        sub_1932AED04(a1: v38, a2: v39, a3: 537464, a4: v39, a5: 537448, a6: v41);
LABEL_20:
      MEMORY[0x79A10](a1: v38, a2: v39, a3: v37, a4: v38);
      goto LABEL_8;
    }
    if ( (int)sub_1932AEE24(a1: v38, a2: v39, a3: v16, a4: v39, a5: 4, a6) < 0 )
      goto LABEL_20;
    v46[1] = 4;
    if ( (int)MEMORY[0x799F8](a1: v38, a2: v39, a3: 0xFFFF, a4: v16, a5: 4103, a6: v46) >= 0 )
    {
      v42 = v46[0];
    }
    else
    {
      v42 = MEMORY[0x79958](a1: v38, a2: v39);
      v46[0] = v42;
    }
    if ( v42 != 0 && v42 != 10061 )
      goto LABEL_20;
  }
  MEMORY[0x79A10](a1: v38, a2: v39, a3: v37, a4: v38);
  MEMORY[0x79A00](a1: v44, a2: v45, a3: v43, a4: v16);
  return 1;
}
