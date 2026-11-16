// sub_181E9D000
// rva 0x01e9d000  size 486  section .text  group text
// window base 0x181e9d000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E9D000(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r15
  unsigned __int64 result; // rax
  __int64 v9; // rdi
  double v10; // xmm0_8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  char v32; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v33; // [rsp+8h] [rbp-40h]
  _QWORD *v34; // [rsp+10h] [rbp-38h]
  int v35; // [rsp+1Ch] [rbp-2Ch]
  __int64 v36; // [rsp+20h] [rbp-28h]
  unsigned __int64 v37; // [rsp+28h] [rbp-20h]
  unsigned __int64 v38; // [rsp+30h] [rbp-18h]
  unsigned __int64 v39; // [rsp+38h] [rbp-10h]
  unsigned int v40; // [rsp+44h] [rbp-4h]

  v36 = a3;
  v40 = a5;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v7 + 8) )
  {
    v34 = a6;
    v10 = sub_181EB83C0(a1, a2, a3, a4, a5, (_DWORD)a6, a7: v32);
LABEL_21:
    MEMORY[0x18276EFE0](a1: v9, a2: v13, a3: v11, a4: v12, a5: v15, a6: v34, a7: v10);
    goto LABEL_22;
  }
  result = *(unsigned int *)(a3 + 8);
  if ( v6 + 47082131 == a6 )
  {
    v35 = *(_DWORD *)(a3 + 8);
    v34 = a6;
    if ( a5 != 0 && *(_DWORD *)(a3 + 112) == 47082131 )
    {
      if ( (_DWORD)result != 0 )
      {
        v33 = v6 + 47082128;
        v39 = sub_181E9F460(a1, a2, a3: v6 + 47082128);
        v28 = sub_181E9F4A0(a1: v26, a2: v27, a3: v33);
        v31 = ((v39 >> 1) + 0x7FFFF) & 0xFFFFFFFFFFF80000LL;
        if ( v28 > v31 )
          JUMPOUT(0x303D27178LL);
        result = ((v39 >> 1) + 0x7FFFF) & 0xFFFFFFFFFFF80000LL;
        if ( v39 > v31 )
        {
          v38 = ((v39 >> 1) + 0x7FFFF) & 0xFFFFFFFFFFF80000LL;
          result = sub_181E9F840(a1: v29, a2: v30, a3: v33, a4: v39, a5: result);
        }
        goto LABEL_4;
      }
LABEL_22:
      MEMORY[0x18276EFE0]();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_181E9D200();
    }
  }
  else
  {
    v35 = *(_DWORD *)(a3 + 8);
    v34 = a6;
    v38 = v6[47081594] + (v6[47081595] << 19);
    result = sub_181EA5F20(a1, a2, a3: v6 + 47081598);
    v11 = v36;
    v12 = *(_QWORD *)(v36 + 104);
    if ( v12 != 0 )
    {
      v13 = v6[47081669] + (v6[47081670] << 19);
      v14 = v13 + result + v38;
      result = 2 * v14;
      if ( 2 * v14 > v12 )
      {
        v15 = v40;
        if ( v35 != 0 )
        {
          v38 = v14;
          v33 = v6 + 47082128;
          v39 = sub_181E9F460(a1: v9, a2: v13, a3: v6 + 47082128);
          v21 = sub_181E9CE80(a1: v17, a2: v18, a3: v36, a4: v16, a5: v19, a6: v20);
          v25 = (2 * v39 + 0x7FFFF) & 0xFFFFFFFFFFF80000LL;
          if ( v21 < v25 )
            JUMPOUT(0x303D27115LL);
          result = (2 * v39 + 0x7FFFF) & 0xFFFFFFFFFFF80000LL;
          if ( v25 > v39 )
          {
            v37 = (2 * v39 + 0x7FFFF) & 0xFFFFFFFFFFF80000LL;
            result = sub_181E9F840(a1: v23, a2: v24, a3: v33, a4: v22, a5: result);
          }
          goto LABEL_4;
        }
        goto LABEL_21;
      }
    }
  }
LABEL_4:
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
