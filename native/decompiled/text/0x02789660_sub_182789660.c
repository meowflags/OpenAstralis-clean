// sub_182789660
// rva 0x02789660  size 102  section .text  group text
// window base 0x182789660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182789660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // r8
  _QWORD v76[2]; // [rsp-8h] [rbp-6F0h] BYREF
  _DWORD v77[4]; // [rsp+8h] [rbp-6E0h] BYREF
  _BYTE v78[528]; // [rsp+18h] [rbp-6D0h] BYREF
  _BYTE *v79; // [rsp+228h] [rbp-4C0h]
  _DWORD *v80; // [rsp+230h] [rbp-4B8h]
  __int64 v81; // [rsp+238h] [rbp-4B0h]
  _QWORD v82[2]; // [rsp+240h] [rbp-4A8h] BYREF
  _BYTE v83[528]; // [rsp+250h] [rbp-498h] BYREF
  _DWORD v84[4]; // [rsp+460h] [rbp-288h] BYREF
  char v85; // [rsp+470h] [rbp-278h] BYREF
  unsigned int v86; // [rsp+47Ch] [rbp-26Ch]
  _BYTE *v87; // [rsp+480h] [rbp-268h]
  _DWORD *v88; // [rsp+488h] [rbp-260h]
  char *v89; // [rsp+490h] [rbp-258h]
  _QWORD v90[2]; // [rsp+498h] [rbp-250h] BYREF
  _BYTE v91[520]; // [rsp+4A8h] [rbp-240h] BYREF
  int v92; // [rsp+6B0h] [rbp-38h]
  int v93; // [rsp+6B4h] [rbp-34h]
  _BYTE *v94; // [rsp+6B8h] [rbp-30h]
  __int64 v95; // [rsp+6C0h] [rbp-28h] BYREF
  _DWORD *v96; // [rsp+6D0h] [rbp-18h]
  unsigned int v97; // [rsp+6DCh] [rbp-Ch]
  __int64 v98; // [rsp+6E0h] [rbp-8h]

  if ( (unsigned __int64)&v95 > *(_QWORD *)(v7 + 8) )
  {
    v98 = a3;
    v97 = a5;
    v8 = (_DWORD *)sub_1827884C0(a1, a2, a3, a4: a5, a5);
    v9 = (unsigned int)v8[6];
    v10 = (unsigned int)v8[5];
    v11 = *(_QWORD *)(v6 + 8LL * (*v8 >> 3) + 712);
    v96 = v8;
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v5 + v11))(
               a1: v12,
               a2: v13,
               a3: v8,
               a4: v11,
               a5: v10,
               a6: v9);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_18277F280(a1: v16, a2: v17, a3: v15, a4: (__int64)v96);
    return result;
  }
  MEMORY[0x181EB84E0]();
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
  v90[1] = v21;
  if ( (unsigned __int64)v90 <= *(_QWORD *)(v7 + 8) )
  {
    v22 = MEMORY[0x181EB84E0]();
  }
  else
  {
    v94 = v91;
    v22 = sub_18278AEC0(a1: v19, a2: v20, a3: 260, a4: v18, a5: v91);
    v93 = v22;
    if ( v22 >= 1 && (unsigned int)v22 < 0x104 )
    {
      result = sub_182789660(a1: v24, a2: v25, a3: v94, a4: v23, a5: (unsigned int)v22);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v28, a2: v29, a3: v26, a4: v27);
      return result;
    }
  }
  if ( v22 >= 1 )
    JUMPOUT(0x304ED2778LL);
  v92 = 0;
  MEMORY[0x1828C1C40](a1: v24, a2: 0, a3: v6 + 371340584);
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
  if ( (unsigned __int64)v82 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    if ( (unsigned __int64)v76 <= *(_QWORD *)(v7 + 8) )
    {
      MEMORY[0x181EB84E0]();
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
      return sub_182789A20(a1: v73, a2: v74, a3: v71, a4: v72, a5: v75);
    }
    else
    {
      v76[1] = v47;
      v51 = MEMORY[0x1815A85E0](a1: v49, a2: v50, a3: v6 + 376669752, a4: v48, a5: 0);
      v54 = sub_18278B080(a1: v52, a2: v53, a3: v51);
      if ( v54 != 0 && (v81 = v54, (v64 = sub_18278B180(a1: v55, a2: v56, a3: v54)) != 0) )
      {
        v79 = (_BYTE *)v64;
        v65 = MEMORY[0x184F9CAA0](a1: v55, a2: v56, a3: v64);
        result = sub_182789660(a1: v67, a2: v68, a3: v81, a4: v66, a5: v65);
        if ( *(int *)(v7 + 16) <= 0 )
          return sub_18277F280(a1: v69, a2: v70, a3: v81, a4: (__int64)v79);
      }
      else
      {
        v80 = v77;
        v77[0] = 257;
        v79 = v78;
        if ( (unsigned int)sub_18278AF20(a1: v55, a2: v56, a3: v78, a4: v77, a5: v77) != 0 )
        {
          result = sub_182789660(a1: v58, a2: v59, a3: v79, a4: v80, a5: (unsigned int)(*v80 - 1));
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_18277F280(a1: v62, a2: v63, a3: v60, a4: v61);
        }
        else
        {
          if ( *(int *)(v7 + 16) <= 0 )
            sub_18277F280(a1: v58, a2: v59, a3: v57, a4: (__int64)v80);
          return v6 + 350867296;
        }
      }
    }
  }
  else
  {
    v82[1] = v30;
    v89 = &v85;
    v31 = sub_18278ACE0();
    if ( (unsigned int)sub_18278AD40(a1: v33, a2: v34, a3: v31, a4: v32, a5: 8, a6: v89) != 0 )
    {
      v88 = v84;
      v84[0] = 261;
      v39 = *(_QWORD *)v89;
      v87 = v83;
      v86 = sub_18278AF40(a1: v37, a2: v38, a3: v39, a4: v84, a5: v83, a6: v84);
      sub_18278AEA0(a1: v40, a2: v41, a3: *(_QWORD *)v89);
      if ( v86 != 0 )
      {
        result = sub_182789660(a1: v42, a2: v43, a3: v87, a4: v88, a5: (unsigned int)(*v88 - 1));
        if ( *(int *)(v7 + 16) <= 0 )
          return sub_18277F280(a1: v45, a2: v46, a3: v44, a4: v86);
      }
      else
      {
        if ( *(int *)(v7 + 16) <= 0 )
          sub_18277F280(a1: v42, a2: v43, a3: (__int64)v89, a4: (__int64)v88);
        return v6 + 371641896;
      }
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        sub_18277F280(a1: v37, a2: v38, a3: v35, a4: v36);
      return v6 + 371641896;
    }
  }
  return result;
}
