// sub_182789CE0
// rva 0x02789ce0  size 541  section .text  group text
// window base 0x182789ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182789CE0(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19,
        int a20,
        __int64 a21)
{
  __int64 v21; // r15
  unsigned __int64 v22; // rsi
  __int64 v23; // rbp
  unsigned int v24; // ecx
  unsigned int (__fastcall *v25)(_BYTE *, unsigned __int64, __int64, __int64, _QWORD, _BYTE *); // r10
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _QWORD v31[5]; // [rsp+0h] [rbp-98h] BYREF
  char v32; // [rsp+28h] [rbp-70h] BYREF
  void *v33; // [rsp+30h] [rbp-68h]
  _QWORD *v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  _BYTE v36[16]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-38h]
  int v38; // [rsp+64h] [rbp-34h]
  __int64 v39; // [rsp+68h] [rbp-30h]
  unsigned int *v40; // [rsp+70h] [rbp-28h]
  unsigned __int64 v41; // [rsp+78h] [rbp-20h]
  unsigned __int64 v42; // [rsp+80h] [rbp-18h]
  __int64 v43; // [rsp+88h] [rbp-10h]
  __int64 v44; // [rsp+90h] [rbp-8h]

  if ( (unsigned __int64)v31 <= *(_QWORD *)(v21 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182789F00();
  }
  else
  {
    v44 = a3;
    v43 = a5;
    v42 = a6;
    if ( a3 == -1 )
    {
      if ( *(int *)(v21 + 16) <= 0 )
        JUMPOUT(0x182789ECBLL);
      return 0;
    }
    else
    {
      v22 = a6;
      v23 = a5;
      while ( v22 != 0 )
      {
        if ( v22 < 0x80000000 )
          v24 = v22;
        else
          v24 = 0x7FFFFFFF;
        v41 = v22;
        v40 = (unsigned int *)v36;
        v33 = nullptr;
        v34 = nullptr;
        v35 = *(_QWORD *)(v21 + 56);
        *(_QWORD *)(v21 + 56) = &v32;
        v25 = (unsigned int (__fastcall *)(_BYTE *, unsigned __int64, __int64, __int64, _QWORD, _BYTE *))MEMORY[0x10E445E8];
        v31[4] = 0;
        v39 = v23;
        v38 = v24;
        v33 = &loc_182789DA1;
        v34 = v31;
        *(_DWORD *)(v21 + 20) = 3;
        a4 = v25(a1: v36, a2: v22, a3: v23, a4: a3, a5: v24, a6: v36);
        if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v21 + 20), 3, 1) == 3 )
        {
          *(_QWORD *)(v21 + 56) = *(_QWORD *)(*(_QWORD *)(v21 + 56) + 24LL);
        }
        else
        {
          v37 = a4;
          sub_18277F4A0(a1: v26, a2: v27, a3: 1, a4, a5: 1u);
          a4 = v37;
        }
        if ( (_DWORD)a4 == 0 )
          JUMPOUT(0x182789E9FLL);
        a1 = (int)v40;
        v28 = *v40;
        if ( (int)v28 < 1 || (int)v28 > v38 )
          JUMPOUT(0x182789EB3LL);
        v23 = v28 + v39;
        if ( *(int *)(v21 + 16) <= 0 )
        {
          v37 = a4;
          sub_18277F280(a1: (__int64)v40, a2: v41, a3: v41 - v28, a4);
          v22 = v29;
        }
        else
        {
          v22 = v41 - v28;
        }
        a3 = v44;
      }
      return sub_182789E86(
               a1,
               a2: 0,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               a20,
               a21);
    }
  }
}
